import requests
import re

def get_one_page(url):
    headers = {
	    'User-Agent':'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/76.0.3809.132 Safari/537.36'
	}
	
    response = requests.get(url, headers=headers)
    if response.status_code == 200:
        return response.text
		
    return None
	
def get_top_number(number_str):
    number_Result = re.search(r'>(\d+)', number_str, re.S)
    if None == number_Result:
        return None
    top_number = re.search(r'(\d+)', number_Result.group(0), re.S)
    return top_number.group(0)

def get_book_name(book_info_tr):
    book_str = re.search(r'>([，A-Za-z0-9IV\u4e00-\u9fa5：]+)<', book_info_tr, re.S)
    book_name = re.search(r'([，A-Za-z0-9IV\u4e00-\u9fa5：]+)', book_str.group(0))
    return book_name.group(0)
	
def get_top_number_and_book_name(html):
    it = re.finditer(r'<h4><a href=\"//book.qidian.com/info/(\d+)\" target=\"_blank\" data-eid=\"qd_C40\" data-bid=\"(\d+)\">([，A-Za-z0-9IV\u4e00-\u9fa5：]+)</a></h4>|<span class=\"rank-tag no(\d+) \">(\d+)', html, re.S)
    number = 0
    top_number = 0;
    book_result={}
    book_name  =''
    for match in it:        
        if number%2 == 0:
            top_number = get_top_number(match.group())
        else:
            book_name  = get_book_name(match.group())
            book_result[top_number] = book_name

        number += 1
		
    return book_result

def main():
    print("起点原创小说排行榜")
    for index in range(1,25):
        url = 'https://www.qidian.com/rank/yuepiao?style=1&page=%d'%(index)
        html = get_one_page(url)
        if None == html:
            print("is none")
        book_result = get_top_number_and_book_name(html)
        for book_top in list(book_result.keys()):
            print("排名: ", book_top, " 书名: ", book_result[book_top])
	
main()
