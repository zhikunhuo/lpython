import re

matchobj = re.match('www','www.runoob.com')

print('matchobj.group[0]', matchobj.group(1))

print(re.match('com', 'www.runoob.com'))