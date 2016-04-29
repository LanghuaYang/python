shoplist = ['apple', 'banana', 'mango', 'carrot']
mylist = shoplist

# mylist只是shoplist的reference，指向shoplist的内存空间
del shoplist[0]

print('shoplist is:', shoplist)
print('mylist is:', mylist)

del mylist[0]

print('shoplist is:', shoplist)
print('mylist is:', mylist)

#mylist拷贝了shoplist，是一个有内存空间的list
mylist = shoplist[:]
del mylist[0]

print('shoplist is:', shoplist)
print('mylist is:', mylist)
