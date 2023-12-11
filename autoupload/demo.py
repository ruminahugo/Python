import os

def main():
    # Lấy đường dẫn thư mục Python
    python_path = os.path.join(os.getcwd(), "al")

    
    for dirpath, dirnames, filenames in os.walk(python_path):
        
        for dirname in dirnames:
            
            for filename in os.listdir(os.path.join(dirpath, dirname)):
                print(dirpath)
                print(f"{dirname[:dirname.find(' ')]}/{filename.split('.')[0]}")

if __name__ == "__main__":
    main()
