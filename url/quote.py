from urllib.parse import quote
from urllib.parse import unquote

keyword ='壁纸'
url = 'https://www.baidu.com/s?wd=' + quote(keyword)
print(url)
url2 ='https://www.baidu.com/s?wd=%E5%A3%81%E7%BA%B8'
print(unquote(url2))