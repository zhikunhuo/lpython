import requests

def get_one_page(url):
    headers={
        'User-Agent':'Mozilla/5.0 (Windows NT 6.1) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/76.0.3809.132 Safari/537.36'
    }
    print("33333")
    response = requests.get(url, headers = headers)
    if response.status_code == 200:
        print("1111111111111")
        return response.content
    print("222222")
    return None
    
def main():
    url='https://www.qidian.com/rank/hotsales?style=1&page=1'
    html = get_one_page(url)
    #target = open('baiduresult.txt','w')    
    with open('baiduresult.txt','wb') as f:
        f.write(html)
    print(html)
    
main()