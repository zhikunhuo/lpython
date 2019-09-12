import re

it = re.finditer('https', 'https://www.python.org/ \nhttps://www.baidu.com')
print(type(it))
for match in it:
    print(match.group())