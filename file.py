
f = open('test.txt','w')
string = '''test hahah hahah
tet hahah
tewtst
efs
gt
tt
ttt
t'''
f.write(string)
f.close()

f = open('test.txt')
f.close()
f = open('test.txt')
while True:
        line = f.readline()
        if len(line) == 0:
                break
        print(line)
f.close()
