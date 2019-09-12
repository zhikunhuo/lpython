import re

print(re.search('https','https://www.python.org/'))
print(re.search('www', 'https://www.python.org/'))
print(re.search('https', 'https://www.python.org/ \nhttps://www.baidu.com'))