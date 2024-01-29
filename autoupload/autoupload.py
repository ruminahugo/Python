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
        "hostOnly": True,
        "httpOnly": True,
        "name": "wordpress_sec_80f5e50d2546414852676eaa0a1724a6",
        "path": "/wp-admin",
        "secure": True,
        "session": True,
        "storeId": None,
        "value": "hoang%7C1702715212%7COWowR5KDwA8OCDQyig8b3E12kGUV6jetwAwHUNYuXm8%7Caedefa7d95231933c3be062f05c3b97ee33fb69d37e5a8206121302fb217594f"
    },
    {
        "domain": "aulac-vegan.com",
        "expirationDate": 1734078622,
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
        "hostOnly": True,
        "httpOnly": False,
        "name": "wordpress_test_cookie",
        "path": "/",
        "secure": True,
        "session": True,
        "storeId": None,
        "value": "WP%20Cookie%20check"
    },
    {
        "domain": "aulac-vegan.com",
        "hostOnly": True,
        "httpOnly": True,
        "name": "wordpress_logged_in_80f5e50d2546414852676eaa0a1724a6",
        "path": "/",
        "secure": True,
        "session": True,
        "storeId": None,
        "value": "hoang%7C1702715212%7COWowR5KDwA8OCDQyig8b3E12kGUV6jetwAwHUNYuXm8%7C276dfc226408ccfa8dc48819ddb9dd179d92a205795c029f0a157220f6c91340"
    },
    {
        "domain": "aulac-vegan.com",
        "expirationDate": 1734083158.237495,
        "hostOnly": True,
        "httpOnly": False,
        "name": "pll_language",
        "path": "/",
        "secure": True,
        "session": False,
        "storeId": None,
        "value": "vi"
    },
    {
        "domain": "aulac-vegan.com",
        "expirationDate": 1734078622,
        "hostOnly": True,
        "httpOnly": False,
        "name": "wp-settings-time-3",
        "path": "/",
        "secure": True,
        "session": False,
        "storeId": None,
        "value": "1702542486"
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

    #for cookie in cookies:
     #   driver.add_cookie(cookie)
    user = WebDriverWait(driver, 10).until(EC.presence_of_element_located((By.ID, "user_login")))
    user.send_keys('hoang')
    pswd = WebDriverWait(driver, 10).until(EC.presence_of_element_located((By.ID, "user_pass")))
    pswd.send_keys('Huyhoang2017')
    submit = WebDriverWait(driver, 10).until(EC.presence_of_element_located((By.ID, "wp-submit")))
    submit.click()

    driver.refresh()

    folder_path = os.path.join("D:\\Python\\autoupload", "al")
    for dirpath, dirnames, filenames in os.walk(folder_path):
        for dirname in dirnames:
            for filename in os.listdir(os.path.join(dirpath, dirname)):
                add_product(driver, filename, dirname, dirpath)
finally:
    driver.quit()

