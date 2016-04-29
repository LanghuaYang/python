name = 'swaroop' #name is a string object

if name.startswith('swa'):
        print('yes, the string starts with swa')
if 'a' in name:
        print('yes, a is included in name')
if name.find('war') != -1:
        print('yes, war is included in name')
delimiter = '__*__'
mylist = ['Brazil','Russia','India','China']
##
## |  
## |  join(...)
## |      S.join(iterable) -> str
## |      
## |      Return a string which is the concatenation of the strings in the
## |      iterable.  The separator between elements is S.
print(delimiter.join(mylist)) #将str插入到list中
