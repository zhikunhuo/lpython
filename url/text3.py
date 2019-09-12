import urllib.request

request = urllib.request.Request("https://www.baidu.com/")
response = urllib.request.urlopen(request)
print(response.status)
print(response.read().decode('utf-8'))