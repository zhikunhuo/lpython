import re


bookstr = re.search(r'>([A-Za-z0-9IV\u4e00-\u9fa5：]+)<', '<h4><a href="//book.qidian.com/info/1011449273" target="_blank" data-eid="qd_C40" data-bid="1011449273">学霸的黑科技系统</a></h4>', re.S)
print("bookstr:", bookstr.group(0))
bookname = re.search(r'([A-Za-z0-9IV\u4e00-\u9fa5：]+)', bookstr.group(0))
print("bookname:", bookname.group(0))