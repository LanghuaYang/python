class Person:
        '''Represents a person'''
        population = 0 #default is static and will be share by all objects
        def __init__(self, name):
                self.name = name
                print('%s init'%self.name)
                Person.population += 1
        def __del__(self):
                print('%s died'%self.name)
                if Person.population == 0:
                        print('i am the last person: ', self.name)
                else:
                        Person.population -= 1
        def howmany(self):
                print(Person.population)
p1 = Person('jack')
p1.howmany()
print(Person.population)
print(p1.name)

p2 = Person('nina')
p2.howmany()
del p2

p1.howmany()
                
