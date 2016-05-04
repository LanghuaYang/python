#有一个文件，文件名为output_1981.10.21.txt 。
#下面使用Python： 读取文件名中的日期时间信息，
#并找出这一天是周几。
#将文件改名为output_YYYY-MM-DD-W.txt
#(YYYY:四位的年，MM：两位的月份，DD：两位的日，
# W：一位的周几，并假设周一为一周第一天)
import re,os,datetime

filename = 'output_1981.10.21.txt'
m = re.search("(?P<year>\d{4}).(?P<month>\d{2}).(?P<day>\d{2})",filename)

year = m.group('year')
month = m.group('month')
day = m.group('day')

date = datetime.date(int(year),int(month),int(day))
weekd = date.weekday() + 1

os.rename(filename,"output_"+year+"-"+month+"-"+day+"-"+str(weekd)+".txt")



