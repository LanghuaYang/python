from functools import reduce
def add(x,y):
        return x+y

r = reduce(add,[1,2,3,4,5])
print(r)

t = reduce(lambda x,y:x+y, [1,2,3,4,5])
print(t)
