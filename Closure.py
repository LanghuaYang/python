a,b,c = [1,2,3] #用列表的lsit[0],list[1],list[2]分别给a，b，c赋值
print(a,b,c)


def count():
    fs = []
    for i in range(1, 4):
        def f():
             return i*i
        fs.append(f)
    return fs

f1, f2, f3 = count()#count（）返回了一个列表
print(f1(),f2(),f3())


def count():
    def f(j):#将闭包理解成类中的一个只读的方法
        def g():
            return j*j
        return g
    fs = []
    for i in range(1, 4):
        fs.append(f(i)) # f(i)立刻被执行，因此i的当前值被传入f()
    return fs

f1, f2, f3 = count()
print(f1(),f2(),f3())
