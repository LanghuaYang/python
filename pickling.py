import cPickle as p

shoplistfile = 'shoplist.txt'

shoplist = ['apple', 'mango', 'carrot']

f = open(shoplistfile, 'w')
p.dump(shoplist, f) # dump the object to a file
f.close()
del shoplist 

# Read back from the storage
f = open(shoplistfile)
storedlist = p.load(f)
print(storedlist)
