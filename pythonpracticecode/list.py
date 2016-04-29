shoplist = ['apple', 'mange', 'carrot', 'banana']
print('I have ', len(shoplist), 'items to purchage')
print('these items are:')
for item in shoplist:
        print(item)
print('I also have to buy rice')
shoplist.append('rice')
print('My shopping list is now', shoplist)
print('i want sort my shoppinglist')
shoplist.sort()
print('the sorted shopping list is', shoplist)
print('the first item in shoppinglist is ', shoplist[0])
del shoplist[0]
print('i delete the first item in the shoppinglist', shoplist)
