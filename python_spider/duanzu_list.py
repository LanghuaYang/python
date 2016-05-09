from bs4 import BeautifulSoup
import requests

single_url = 'http://bj.xiaozhu.com/'

def getlistinfo(url):
    web_data = requests.get(url)
    soup = BeautifulSoup(web_data.text,'lxml')
    for i in range(1,25):
        titles = soup.select('li:nth-of-type(' + str(i) + ') > div.result_btm_con.lodgeunitname > div > a > span')
        addresss = soup.select('li:nth-of-type(' + str(i) + ') > div.result_btm_con.lodgeunitname > div > em')
        prices = soup.select('li:nth-of-type(' + str(i) + ') > div.result_btm_con.lodgeunitname > span.result_price > i')
        imgs = soup.select('li:nth-of-type(' + str(i) + ') > a > img')
        icons = soup.select('li:nth-of-type(' + str(i) + ') > div.result_btm_con.lodgeunitname > span.result_img > a > img')

        for title,address,price,img,icon,name in zip(titles,addresss,prices,imgs,icons,):
            dict1  = {
                'title': title.get_text(),
                'address': address.get_text(),
                'price': price.get_text(),
                'img': img.get('src'),
                'icon': icon.get('src'),
                'name': name.get_text(),
            }
            print(dict1)

#getlistinfo(single_url)
web_data = requests.get(single_url)
soup = BeautifulSoup(web_data.text, 'lxml')
titles = soup.select('#page_list > ul > li:nth-of-type(1) > div.result_btm_con.lodgeunitname > div > a > span')
print(titles)

'''
#index_show > ul.mtit_con_left.fl > li.time
#infolist > div.pr > a
#zhineng_list_inner_bottom > table > tbody > tr > td:nth-child(4) > span
#btm_wangmeng_ad > div:nth-child(1) > table > tbody > tr:nth-child(1) > td.t > span > a
#infolist > table:nth-child(5) > tbody > tr > td.tc > div > p.img_attest > img
div.pho_info > h4 > em
span.pr5
div.day_l
img[height = "413"]
div.member_pic
span.member_boy_ico
a.lorder_name
'''