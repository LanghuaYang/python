from bs4 import BeautifulSoup

info = []
with open('C:\\MyProject\\test.html') as wb_data:
    Soup = BeautifulSoup(wb_data, 'lxml') #解析html
    #images = Soup.select('body > div:nth-of-type(2) > ul > li:nth-of-type(2) > img')
    images = Soup.select('body > div:nth-of-type(2) > ul > li > img')#抓取所需元素，使用CSS Path
    titles = Soup.select('body > div:nth-of-type(1) > ul > li > a')
    print(images, titles)
#for title in titles:
#   print(title.get_text())

for image, title in zip(images,titles):#放到一个dict中看
    data = {
            'image':image.get('src'),#获得某个标签的属性用get方法
            'title':title.get_text()}#获得某个标签中的文本
    print(data)
    info.append(data)
for i in info:
    if i['title'] == 'home':
        print(i['title'] )

#下列为title和img的CSS Path
'''
body > div:nth-child(1) > ul > li:nth-child(1) > a
body > div:nth-child(2) > ul > li:nth-child(2) > img
'''
