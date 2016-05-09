from bs4 import BeautifulSoup
import requests

url = 'http://bj.xiaozhu.com/fangzi/1514858935.html'

web_data = requests.get(url)
soup = BeautifulSoup(web_data.text,'lxml')
titles = soup.select('div.pho_info > h4 > em')
addresss = soup.select('span.pr5')
prices = soup.select('div.day_l')
imgs = soup.select('div.pho_show_big > div > img#curBigImage')
icons = soup.select('div.member_pic > a > img')
if str(soup.select('h6 > span')) == '[<span class="member_boy_ico"></span>]':
    genders = 'male'
else:
    genders = 'female'
names = soup.select('a.lorder_name')

for title,address,price,img,icon,name in zip(titles,addresss,prices,imgs,icons,names):
    dict1  = {
        'title': title.get_text(),
        'address': address.get_text(),
        'price': price.get_text(),
        'img': img.get('src'),
        'icon': icon.get('src'),
        'gender': genders,
        'name': name.get_text(),
    }
    print(dict1)

'''
div.pho_info > h4 > em
span.pr5
div.day_l
img[height = "413"]
div.member_pic
span.member_boy_ico
a.lorder_name
'''