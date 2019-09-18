import re

target = open('result.txt', 'r')
target_1 = open('result2.txt', 'w')
context = target.read()
#print(context)
#pattern = re.compile(r'<li.*?data-rid=.*?(\d+).*?>')
#it = re.finditer(r'<li data-rid=.*?(\d+).*?>\s*<div class=\"book-img-box\"', context, re.S)
#it = re.finditer(r'<span class=\"rank-tag no(\d+) \">(\d+).*<h4><a href=\"//book.qidian.com/info/(\d+)\" target=\"_blank\" data-eid=\"qd_C40\"', context, re.S)
#it = re.finditer(r'<h4><a href=\"//book.qidian.com/info/(\d+)\" target=\"_blank\" data-eid=\"qd_C40\" data-bid=\"(\d+)\">([IV\u4e00-\u9fa5：]+)</a></h4>|<span class=\"rank-tag no(\d+) \">(\d+)', context, re.S)
it = re.finditer(r'<h4><a href=\"//book.qidian.com/info/(\d+)\" target=\"_blank\" data-eid=\"qd_C40\" data-bid=\"(\d+)\">([A-Za-z0-9IV\u4e00-\u9fa5：]+)</a></h4>|<span class=\"rank-tag no(\d+) \">(\d+)', context, re.S)
for match in it:
    print(match.group())
    target_1.write(match.group())
    target_1.write("\n")

it2 = re.finditer(r'>(\d+)', '<span class="rank-tag no1 ">1', re.S)
for match in it:
    print(match.group())
    target_1.write(match.group())
    target_1.write("\n")
target.close()
target.close()
target_1.close()