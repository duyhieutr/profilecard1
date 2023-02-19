rom selenium import webdriver
# create a webdriver object and specify the path to the ChromeDriver executable
driver = webdriver.Chrome(r"C: \path\to\chromedriver.exe")
# navigate to the Facebook login page
driver.get(*https://www.facebook.com/login")
# locate the email and password fields and enter your login credentials
email field = driver. find element by id("email")
email field.send keys("your-email@example.com")
password field = driver.find element by id("pass")
password_ field.send keys("your-password")
# locate the login button and click it to log in
login_button = driver.find element_by_id(*loginbutton")
login_button.click()