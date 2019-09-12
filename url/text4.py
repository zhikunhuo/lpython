import urllib.request

headers = {
     'Host':'www.baidu.com',
    'User-Agen':'Mozilla/5.0 (Windows NT 6.1) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/76.0.3809.132 Safari/537.36'
}
request = urllib.request.Request("https://www.baidu.com/", headers=headers)
response = urllib.request.urlopen(request)
print(response.status)
print(response.read().decode('utf-8'))