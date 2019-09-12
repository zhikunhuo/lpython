import urllib.parse
import urlib.request

data = bytes(urlib.parse.urlencode({'word':'hello'}), encoding='utf8')
reponse = urlib.request.urlopen('http://httpbin.org/get’, data=data)
print(reponse.read())