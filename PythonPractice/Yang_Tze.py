# -*- coding: utf-8 -*-
import requests,re
from bs4 import BeautifulSoup
url=[]
total=[]
i=0
dict1={"學務處":0,"教務處":0,"體育組":0,"圖書組":0,"註冊組":0,"體育組":0,"應外科":0}
listkey=list(dict1.keys())
for num in range(1,7):
    url.append("http://www.ytjh.ylc.edu.tw/news/3?page={}".format(num))
    #print(url[num-1])
    html=requests.get(url[num-1])
    html_bp=BeautifulSoup(html.text,'html.parser')
    
    #print(str(html_bp))
    data1=html_bp.select('.article-title')
    data2=html_bp.find_all( text=re.compile('單位 :') )
    data3=html_bp.find_all( text=re.compile('點閱率') )
    #print(str(datatmp))
    for data in range(len(data1)):
        print(data1[data].find('a').text)
        print(data2[data])
        print(data3[data])
        #print(re.compile(r'單位 : (.*)').search(data2[data]).group(1))
        #print(re.compile(r'(\d)+').search(data3[data]).group())
        for i in range(len(listkey)):
            #print(dict1[listkey[i]])
            if re.compile(r'單位 : (.*)').search(data2[data]).group(1)==listkey[i]:
                dict1[listkey[i]]=int(re.compile('\d+').search(data3[data]).group())+int(dict1[listkey[i]])
listvalue=list(dict1.values())
print('\n')
for i in range(len(listkey)):
        print("%s : %d" % (listkey[i],listvalue[i]))

        
        
        
       
        