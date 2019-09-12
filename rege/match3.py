import re

print(re.match('https','https://www.python.org/'))
print(re.match('www', 'https://www.python.org/'))
print(re.match('https', 'https://www.python.org/ \nhttps://www.baidu.com'))