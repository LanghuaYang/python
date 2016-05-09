from bs4 import BeautifulSoup
import requests
import time

urllist = 'http://www.tripadvisor.cn/Hotels-g60763-New_York_City_New_York-Hotels.html'
url_saves = 'http://www.tripadvisor.cn/Saves#1'
headerofLanghua = {
    'User-Agent':'Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/45.0.2454.101 Safari/537.36',
    'Cookie': 'ServerPool=C; TAUnique=%1%enc%3Ac%2B8%2B2SlSSKrU5t%2FdQ8UFrnREg7ZjPEgLQ1JSfhW66hRiyTcc85ge6A%3D%3D; TASSK=enc%3A6DIWF%2BE2lCbjWuU2%2FdEkTMvxieGPPqnq0LUE656G3dOgmeY%2B68dnDy%2Fy6TD0Pm8hz7GeIeLHGPU%3D; _jzqckmp=1; __gads=ID=7be518910dae1415:T=1462509398:S=ALNI_MbTvxwZoqXpKoSyvz5KFtFYW8hjVQ; _jzqx=1.1462509397.1462513195.2.jzqsr=so%2Ecom|jzqct=/link.jzqsr=tripadvisor%2Ecn|jzqct=/hotels-g60763-new_york_city_new_york-hotels%2Ehtml; TAAuth2=%1%3%3A26a730f3d18a0c400243e9ca01cbbddb%3AAFGQs6kvhLR61lrEK%2F6s2ckgSTj4rJIPQOWwP8Pbd%2BHAvKqj9FzKsSDfKFAO0ts251pq5e8UU6XFxzhxZW3sD9Ax7ReBLn6fbOktV5dC1aseTtXFsSf6DhZISsuG%2Bs1sAie59%2FqZK0Dg983vzyP%2B%2FD8QMcIY%2FOzjIUeUXeRkpW2MQMcCEgVYDNwv0xgtOWuLMxsxr%2F%2BhTrmcodHjzrqmLDY%3D; _smt_uid=572c1f56.290722ea; CM=%1%t4b-pc%2C%2C-1%7CRCPers%2C%2C-1%7CHomeAPers%2C%2C-1%7CWShadeSeen%2C%2C-1%7Cpv%2C5%2C-1%7CRCSess%2C%2C-1%7CHomeASess%2C3%2C-1%7Ctvsess%2C-1%2C-1%7Csh%2CRuleBasedPopup%2C1462595811%7Cpssamex%2C%2C-1%7C2016sticksess%2C%2C-1%7CCCPers%2C%2C-1%7Ctvpers%2C1%2C1463114211%7CCCSess%2C%2C-1%7Csesssticker%2C%2C-1%7C2016stickpers%2C%2C-1%7Ct4b-sc%2C%2C-1%7CMC_IB_UPSELL_IB_LOGOS2%2C%2C-1%7CMC_IB_UPSELL_IB_LOGOS%2C%2C-1%7Csess_rev%2C%2C-1%7Csessamex%2C%2C-1%7Cpers_rev%2C%2C-1%7CRBASess%2C%2C-1%7Cperssticker%2C%2C-1%7CRBAPers%2C%2C-1%7C; TATravelInfo=V2*A.2*MG.-1*HP.2*FL.3*RVL.60763_127l93559_127*RS.1; TAReturnTo=%1%%2FHotel_Review-g60763-d93559-Reviews-The_Sherry_Netherland_Hotel-New_York_City_New_York.html; roybatty=AO6XhK5CuFuzggVMotf4V3j0JlozkwMSO7HKeXI5iug9Iz5pGm0KLCuHWtFBvI03uIXJSvbvgqHxtAEoKX5ER%2FZmFJKwuTUYNiIpOC7xlYG9UDntuwPWW5FQTINw%2BCmvd07fDjgOFy%2Bup5kxCccOnIPcQutfrtSNdAN8nhvIIfrB%2C1; ki_t=1462509396484%3B1462509396484%3B1462513526465%3B1%3B15; ki_r=; TASession=%1%V2ID.C08CD09119AA32EA561CBB9F418AA1A6*SQ.41*MC.20881*PR.429%7CHotels*LS.SavesAjax*GR.62*TCPAR.72*TBR.16*EXEX.1*ABTR.51*PPRP.34*PHTB.91*FS.64*CPU.4*HS.popularity*ES.popularity*AS.popularity*DS.5*SAS.popularity*FPS.oldFirst*TS.014F34F270C5498A2A4806BE12A7374D*LF.zhCN*FA.1*DF.0*LR.http%3A%2F%2Fwww%5C.so%5C.com%2Flink%3Furl%3Dhttp%253A%252F%252Fwww%5C.tripadvisor%5C.cn%253Fm%253D20881%2526ttcampaign%253DMTYHead%2526ttgroup%253DHeadline%2526tttype%253Dtext%2526ttpic%253DNull%26q%3Dtripadvisor%26ts%3D1462509374%26t%3D53a81d79dab03dbdc2293661d8d892f%26src%3Dhaosou*LP.%2F-a_tttype%5C.text-a_ttcampaign%5C.MTYHead-a_ttgroup%5C.Headline-a_ttpic%5C.Null-m20881*MS.-1*RMS.-1*TRA.true*LD.93559*BG.60763*BT.hmb2rc; TAUD=LA-1462509386671-1*LG-4140377-2.1.F*LD-4140379-.....; Hm_lvt_2947ca2c006be346c7a024ce1ad9c24a=1462509396,1462509425,1462513432; Hm_lpvt_2947ca2c006be346c7a024ce1ad9c24a=1462513527; _qzja=1.201228469.1462509397939.1462509397942.1462513195658.1462513496419.1462513527432..0.0.15.2; _qzjb=1.1462513195657.10.0.0.0; _qzjc=1; _qzjto=15.2.0; _jzqa=1.1528113064289115000.1462509397.1462509397.1462513195.2; _jzqc=1; _jzqb=1.10.10.1462513195.1; bdshare_firstime=1462513529062; NPID='
}
urlattractions = 'http://www.tripadvisor.cn/Attractions-g60763-Activities-c56-oa30-New_York_City_New_York.html#ATTRACTION_LIST'
urlattractionsformat = ['http://www.tripadvisor.cn/Attractions-g60763-Activities-c56-oa{i}-New_York_City_New_York.html#ATTRACTION_LIST',format(str(i) for i in range(0,150,30))]

def getattraction(url):
    web_data = requests.get(url) #发送请求 ·http的get()方法，网站会返回一个response，将其储存在web_data中
    time.sleep(2) #防止网站反爬虫，间隔两秒发送请求
    soup = BeautifulSoup(web_data.text,'lxml')#将web_data放进一个文件中，使其可读
    #print(soup)
    titles = soup.select('div.property_title > a[target="_blank"]')
    print(titles)
    images = soup.select('img[width="160"]')
    cates = soup.select('div.p13n_reasoning_v2')
    #print(titles,images,cates)
    file = open("C:\\Users\\Acer\\Desktop\\parse.txt",'a')#打开文件方式为'a' 叠加写入，不会覆盖之前的内容
    for title,image,cate in zip(titles,images,cates):
        data = {
            'title':title.get_text(),
            'image':image.get('src'),
            'cate': list(cate.stripped_strings),
        }
        #print(data)
        for key in data:
            file.write(key + ' ' + str(data[key]) + ' ')#将dict中的内容写入文件，增加一个空格增加易读性
        file.write('\n')#写完一个data后换行
    file.close()

def getsaves(url,headers,data = None):
    wb_data = requests.get(url,headers = headers)
    time.sleep(2)
    soup = BeautifulSoup(wb_data.text,'lxml')
    #print(soup)
    titles = soup.select('a.location-name')
    images = soup.select('img.photo_image')
    addresss = soup.select('span.street-address')
    for title,image,address in zip(titles,images,addresss):
        data = {
            'title':title.get_text(),
            'image':image.get('src'),
            'address':address.get_text(),
        }
        print(data)


for i in range(0,150,30):
    single_url = 'http://www.tripadvisor.cn/Attractions-g60763-Activities-c56-oa' + str(i) + '-New_York_City_New_York.html#ATTRACTION_LIST'
    getattraction(single_url)
'''
User-Agent:Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/45.0.2454.101 Safari/537.36
Cookie:ServerPool=C; TAUnique=%1%enc%3Ac%2B8%2B2SlSSKrU5t%2FdQ8UFrnREg7ZjPEgLQ1JSfhW66hRiyTcc85ge6A%3D%3D; TASSK=enc%3A6DIWF%2BE2lCbjWuU2%2FdEkTMvxieGPPqnq0LUE656G3dOgmeY%2B68dnDy%2Fy6TD0Pm8hz7GeIeLHGPU%3D; _jzqckmp=1; __gads=ID=7be518910dae1415:T=1462509398:S=ALNI_MbTvxwZoqXpKoSyvz5KFtFYW8hjVQ; _jzqx=1.1462509397.1462513195.2.jzqsr=so%2Ecom|jzqct=/link.jzqsr=tripadvisor%2Ecn|jzqct=/hotels-g60763-new_york_city_new_york-hotels%2Ehtml; TAAuth2=%1%3%3A26a730f3d18a0c400243e9ca01cbbddb%3AAFGQs6kvhLR61lrEK%2F6s2ckgSTj4rJIPQOWwP8Pbd%2BHAvKqj9FzKsSDfKFAO0ts251pq5e8UU6XFxzhxZW3sD9Ax7ReBLn6fbOktV5dC1aseTtXFsSf6DhZISsuG%2Bs1sAie59%2FqZK0Dg983vzyP%2B%2FD8QMcIY%2FOzjIUeUXeRkpW2MQMcCEgVYDNwv0xgtOWuLMxsxr%2F%2BhTrmcodHjzrqmLDY%3D; _smt_uid=572c1f56.290722ea; CM=%1%t4b-pc%2C%2C-1%7CRCPers%2C%2C-1%7CHomeAPers%2C%2C-1%7CWShadeSeen%2C%2C-1%7Cpv%2C5%2C-1%7CRCSess%2C%2C-1%7CHomeASess%2C3%2C-1%7Ctvsess%2C-1%2C-1%7Csh%2CRuleBasedPopup%2C1462595811%7Cpssamex%2C%2C-1%7C2016sticksess%2C%2C-1%7CCCPers%2C%2C-1%7Ctvpers%2C1%2C1463114211%7CCCSess%2C%2C-1%7Csesssticker%2C%2C-1%7C2016stickpers%2C%2C-1%7Ct4b-sc%2C%2C-1%7CMC_IB_UPSELL_IB_LOGOS2%2C%2C-1%7CMC_IB_UPSELL_IB_LOGOS%2C%2C-1%7Csess_rev%2C%2C-1%7Csessamex%2C%2C-1%7Cpers_rev%2C%2C-1%7CRBASess%2C%2C-1%7Cperssticker%2C%2C-1%7CRBAPers%2C%2C-1%7C; TATravelInfo=V2*A.2*MG.-1*HP.2*FL.3*RVL.60763_127l93559_127*RS.1; TAReturnTo=%1%%2FHotel_Review-g60763-d93559-Reviews-The_Sherry_Netherland_Hotel-New_York_City_New_York.html; roybatty=AO6XhK5CuFuzggVMotf4V3j0JlozkwMSO7HKeXI5iug9Iz5pGm0KLCuHWtFBvI03uIXJSvbvgqHxtAEoKX5ER%2FZmFJKwuTUYNiIpOC7xlYG9UDntuwPWW5FQTINw%2BCmvd07fDjgOFy%2Bup5kxCccOnIPcQutfrtSNdAN8nhvIIfrB%2C1; ki_t=1462509396484%3B1462509396484%3B1462513526465%3B1%3B15; ki_r=; TASession=%1%V2ID.C08CD09119AA32EA561CBB9F418AA1A6*SQ.41*MC.20881*PR.429%7CHotels*LS.SavesAjax*GR.62*TCPAR.72*TBR.16*EXEX.1*ABTR.51*PPRP.34*PHTB.91*FS.64*CPU.4*HS.popularity*ES.popularity*AS.popularity*DS.5*SAS.popularity*FPS.oldFirst*TS.014F34F270C5498A2A4806BE12A7374D*LF.zhCN*FA.1*DF.0*LR.http%3A%2F%2Fwww%5C.so%5C.com%2Flink%3Furl%3Dhttp%253A%252F%252Fwww%5C.tripadvisor%5C.cn%253Fm%253D20881%2526ttcampaign%253DMTYHead%2526ttgroup%253DHeadline%2526tttype%253Dtext%2526ttpic%253DNull%26q%3Dtripadvisor%26ts%3D1462509374%26t%3D53a81d79dab03dbdc2293661d8d892f%26src%3Dhaosou*LP.%2F-a_tttype%5C.text-a_ttcampaign%5C.MTYHead-a_ttgroup%5C.Headline-a_ttpic%5C.Null-m20881*MS.-1*RMS.-1*TRA.true*LD.93559*BG.60763*BT.hmb2rc; TAUD=LA-1462509386671-1*LG-4140377-2.1.F*LD-4140379-.....; Hm_lvt_2947ca2c006be346c7a024ce1ad9c24a=1462509396,1462509425,1462513432; Hm_lpvt_2947ca2c006be346c7a024ce1ad9c24a=1462513527; _qzja=1.201228469.1462509397939.1462509397942.1462513195658.1462513496419.1462513527432..0.0.15.2; _qzjb=1.1462513195657.10.0.0.0; _qzjc=1; _qzjto=15.2.0; _jzqa=1.1528113064289115000.1462509397.1462509397.1462513195.2; _jzqc=1; _jzqb=1.10.10.1462513195.1; bdshare_firstime=1462513529062; NPID=
'''

