import re

m = re.search('[0-9]','abskgwegehrtjtytj6yu9')
print(m.group(0))

f = open('test.txt')

while True:
        line = f.readline()
        if len(line) == 0:
                break
        s = re.search('[0-9]',line)
        if s != None:
                print(s.group())
        print(line)

f.close()
print('Done')
