from urllib.parse import urlsplit

result = urlsplit ('http://www.baidu.com/index.html;user?id=S#comment')
print(result)