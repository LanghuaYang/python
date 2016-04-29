ab = {'lily':'lily@by.org',
      'larry':'larry@wall.org',
      'mat':'mat@ruby-lang.org',
      'spam':'spam@hotmail.com'
      }
print('lily\'s address is %s'%ab['lily'])
ab['guido'] = 'guido@python.org'
del ab['lily']
print('there are %d contacts in the address-book\n'%len(ab))
for name,address in ab.items():
        print('contact %s at %s'%(name,address))
if'guido' in ab:
        print('guido\'s address is %s'%ab['guido'])
if ab.__contains__('larry'):
        print('larry\'s address is %s'%ab['larry'])
