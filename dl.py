import os
import subprocess
import shutil
import yt_dlp

def download_video_audio(url, output_folder="downloads"):
    # Tạo thư mục lưu file nếu chưa tồn tại
    os.makedirs(output_folder, exist_ok=True)

    # Tùy chọn tải video
    video_opts = {
        "format": "bv*[ext=mp4]",
        "outtmpl": os.path.join(output_folder, "%(title)s.%(ext)s"),
        "throttled-rate": None,
        "external-downloader": "aria2c",
        "external-downloader-args": "-x 16 -s 16 -k 2M --auto-file-renaming=false --max-connection-per-server=16 --retry-wait=2 --min-split-size=10M",
        "restrictfilenames": True
    }

    # Tùy chọn tải audio
    audio_opts = {
        "format": "ba[ext=m4a]",
        "outtmpl": os.path.join(output_folder, "%(title)s.%(ext)s"),
        "postprocessors": [{
            "key": "FFmpegExtractAudio",
            "preferredcodec": "m4a",
            "preferredquality": "256"
        }],
        "restrictfilenames": True
    }

    # Kiểm tra nếu aria2c không có thì xóa tùy chọn tải nhanh
    if not shutil.which("aria2c"):
        print("⚠️ Không tìm thấy `aria2c`, sẽ tải chậm hơn.")
        del video_opts["external-downloader"]
        del video_opts["external-downloader-args"]

    # Lấy tên file từ yt-dlp
    with yt_dlp.YoutubeDL(video_opts) as ydl:
        info = ydl.extract_info(url, download=False)
        video_file = ydl.prepare_filename(info)
        video_file = video_file.replace(".webm", ".mp4")
    audio_file = video_file.replace(".mp4", ".m4a")
    final_output = video_file.replace(".mp4", "_final.mp4")

    # Tải video
    print("🎥 Đang tải video...")
    with yt_dlp.YoutubeDL(video_opts) as ydl:
        ydl.download([url])

    # Tải audio
    print("🎵 Đang tải âm thanh...")
    with yt_dlp.YoutubeDL(audio_opts) as ydl:
        ydl.download([url])

    # Kiểm tra file đã tải xong chưa
    if not os.path.exists(video_file) or not os.path.exists(audio_file):
        print(f"❌ Lỗi: Không tìm thấy file '{video_file}' hoặc '{audio_file}'")
        return

    # Ghép video và audio bằng FFmpeg
    print("🎬 Đang ghép video và âm thanh...")
    ffmpeg_cmd = [
        "ffmpeg", "-y", "-i", video_file, "-i", audio_file,
        "-c:v", "copy", "-c:a", "aac", "-strict", "experimental", final_output
    ]
    try:
        subprocess.run(ffmpeg_cmd, check=True)
        print(f"✅ Hoàn tất! Video đã lưu tại: {final_output}")
    except subprocess.CalledProcessError:
        print("❌ Lỗi: Không thể ghép video, kiểm tra lại FFmpeg!")

    # Xóa file video và audio gốc
    os.remove(video_file)
    os.remove(audio_file)

if __name__ == "__main__":
    url = input("🎥 Nhập URL video YouTube: ")
    download_video_audio(url, output_folder="videos")
