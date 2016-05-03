def even():#generator function
        n = 0
        while True:
                yield n
                n = n + 2
for i in even():
        if i < 100:
                print(i)
        else:
                break
for i in (x*x for x in range(1,10) if x > 3):#普通的generator
        print(i)
        
for i in range(1,10):#range是[）的
        print(i)
