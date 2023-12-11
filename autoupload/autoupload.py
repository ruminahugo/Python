import os
from selenium import webdriver
import time
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.common.action_chains import ActionChains
import subprocess
import autoit


cookies = [
    {
        "domain": "aulac-vegan.com",
        "expirationDate": 1735721333.513594,
        "hostOnly": True,
        "httpOnly": True,
        "name": "wordpress_sec_80f5e50d2546414852676eaa0a1724a6",
        "path": "/wp-admin",
        "secure": True,
        "session": False,
        "storeId": None,
        "value": "hoang%7C1702094716%7C4WX2sq7xNJDueG7Zy9TUO5F2a9YHp7EBLeuh0fS0pYb%7C2ef06b26e0317e814ad473cf7ee9a5fe6b87f8ae4278da99b8cdda34b70cff6f"
    },
    {
        "domain": "aulac-vegan.com",
        "expirationDate": 1735721444.842825,
        "hostOnly": True,
        "httpOnly": False,
        "name": "wp-settings-3",
        "path": "/",
        "secure": True,
        "session": False,
        "storeId": None,
        "value": "libraryContent%3Dbrowse%26advImgDetails%3Dshow%26editor%3Dtinymce%26align%3Dcenter%26imgsize%3Dfull"
    },
    {
        "domain": "aulac-vegan.com",
        "expirationDate": 1735720632.403052,
        "hostOnly": True,
        "httpOnly": True,
        "name": "wordpress_logged_in_80f5e50d2546414852676eaa0a1724a6",
        "path": "/",
        "secure": True,
        "session": False,
        "storeId": None,
        "value": "hoang%7C1702094716%7C4WX2sq7xNJDueG7Zy9TUO5F2a9YHp7EBLeuh0fS0pYb%7C93bbe0e61f14badeec03b83f5b20b2a45472a9c2d267617a9f787bafc227ec83"
    },
    {
        "domain": "aulac-vegan.com",
        "hostOnly": True,
        "httpOnly": False,
        "name": "pll_language",
        "path": "/",
        "secure": True,
        "session": True,
        "storeId": None,
        "value": "vi",
        "expirationDate": 1701165167.753
    }
]

driver = webdriver.Chrome()


def add_product(driver, filename, dirname, dirpath):

    file_path = os.path.join(dirpath, dirname, filename)
    name = filename.split('.')[0]
    id_categorys = dirname[:dirname.find(' ')]
     
    driver.get("https://aulac-vegan.com/wp-admin/post-new.php?post_type=product")

    title = WebDriverWait(driver, 10).until(EC.presence_of_element_located((By.ID, "title")))
    title.send_keys(name)

    wait = WebDriverWait(driver, 10)
    iframe = wait.until(EC.presence_of_element_located((By.TAG_NAME, "iframe")))
    driver.switch_to.frame(iframe)

    # Tìm và nhập dữ liệu vào phần tử <p> trong iframe
    content = WebDriverWait(driver, 10).until(EC.presence_of_element_located((By.XPATH, "//body[@id='tinymce']/p")))
    content.send_keys(name)

    # Chuyển lại frame cha (nếu cần)
    driver.switch_to.default_content()
 
    category = WebDriverWait(driver, 10).until(EC.presence_of_element_located((By.XPATH, f"//input[@id='{id_categorys}']")))
    category.click()

    thumbnail = WebDriverWait(driver, 10).until(EC.presence_of_element_located((By.ID, "set-post-thumbnail")))
    thumbnail.click()

    btnup = WebDriverWait(driver, 10).until(EC.presence_of_element_located((By.ID, "menu-item-upload")))
    btnup.click()

    btnselect = WebDriverWait(driver, 10).until(EC.presence_of_element_located((By.ID, "__wp-uploader-id-1")))
    btnselect.click()

    autoit.win_wait_active("Open")  # Wait for the 'Open' dialog to appear
    time.sleep(1)  # Add a small delay to ensure the dialog is fully loaded
    autoit.control_set_text("Open", "Edit1", file_path)  # Set the file path
    autoit.control_send("Open", "Button1", "{ENTER}")
    time.sleep(7)

    btnset = WebDriverWait(driver, 8).until(EC.element_to_be_clickable((By.XPATH, "//button[text()='Thiết lập ảnh sản phẩm']")))
    btnset.click()
    time.sleep(3)

    btnpost_vi = WebDriverWait(driver, 7).until(EC.element_to_be_clickable((By.ID, "publish")))
    btnpost_vi.click()
    time.sleep(5)

    # Đợi đến khi button có thể click được
    btnchange = WebDriverWait(driver, 8).until(EC.presence_of_all_elements_located((By.XPATH, "//a[@title='Add a translation in English']")))
    btnchange[1].click()
    time.sleep(5)

    btnpost_en = driver.find_element(By.ID, "publish")
    btnpost_en.click()
    time.sleep(5)

    if os.path.exists(file_path):
        os.remove(file_path)

try:
    driver.get("https://aulac-vegan.com/admin")

    for cookie in cookies:
        driver.add_cookie(cookie)

    driver.refresh()

    folder_path = os.path.join("D:\\Python\\autoupload", "al")
    for dirpath, dirnames, filenames in os.walk(folder_path):
        for dirname in dirnames:
            for filename in os.listdir(os.path.join(dirpath, dirname)):
                add_product(driver, filename, dirname, dirpath)
finally:
    driver.quit()

