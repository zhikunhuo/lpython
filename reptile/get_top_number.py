import re


it2 = re.finditer(r'>(\d+)', '<span class="rank-tag no1 ">1', re.S)
for match in it2:
    print(match.group())
    it3 = re.finditer(r'(\d+)', match.group(), re.S)
    for match2 in it3:
        print(match2.group())