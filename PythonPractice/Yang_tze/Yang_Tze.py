
import requests,re,time
import matplotlib.pyplot as plt
import numpy as np
from bs4 import BeautifulSoup
url=[]     #判斷總頁數
url_12=[]  #dict1 dict2
url_34=[]  #dict3 dict4
total=[]
i=0
dict1={"學務處":0,"教務處":0,"體育組":0,"圖書組":0,"註冊組":0,"體育組":0,"應外科":0,"輔導室":0,"設備組":0,"教學組":0}

def define():
    dict_1={"學務處":0,"教務處":0,"圖書組":0,"註冊組":0,"應外科":0,"輔導室":0}
    return dict_1

dict1=define() #榮譽榜總人數
dict2=define() #榮譽榜總文章數
        
listkey=list(dict1.keys())
for num in range(1,9):
    url_12.append("http://www.ytjh.ylc.edu.tw/news/3?page={}".format(num))
    #print(url[num-1])
    html=requests.get(url_12[num-1])
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
                dict2[listkey[i]]=int(dict2[listkey[i]])+1
list1_value=list(dict1.values())
list2_value=list(dict2.values())
print('\n')
for i in range(len(listkey)):
        print("%s : %d" % (listkey[i],list1_value[i]))

#------------draw picture---------------------------------------------------------------------------------
import matplotlib.font_manager
matplotlib.font_manager.findSystemFonts(fontpaths=None)
plt.rcParams["font.family"]="Microsoft JhengHei"
xticks=np.arange(len(listkey))+1
def visitor(xticks):
    plt.figure(1)               
    plt.bar(xticks,list1_value,align='center')
    plt.ylim(0,15000)
    j=1
    for i in list1_value:
       plt.text(j,i+100,"%d"%i,horizontalalignment='center')
       j+=1
    plt.xticks(xticks,listkey)
    plt.title("%s 揚子中學榮譽榜各處室網頁點閱總人數" %(time.strftime("%m/%d")))
    plt.savefig("%s_visitor.png" %(time.strftime("%m_%d")),dpi=300,format="png")
def article(xticks):
    plt.figure(2)
    plt.bar(xticks,list2_value)
    plt.ylim(0,30)
    j=1
    for i in list2_value:
       plt.text(j,i+2,"%d"%i,horizontalalignment='center')
       j+=1
    plt.xticks(xticks,listkey)
    plt.title("%s 揚子中學榮譽榜各處室網頁文章數" %(time.strftime("%m/%d")))
    plt.savefig("%s_article.png"%(time.strftime("%m_%d")),dpi=300,format="png")
plt.figure(1)
plt.figure(2)
visitor(xticks)
article(xticks)