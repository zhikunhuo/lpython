from urllib.parse import urlsplit

result = urlsplit ('//www.baidu.com/index.html;user?id=S#comment', scheme ='https', allow_fragments= True)
print(result)