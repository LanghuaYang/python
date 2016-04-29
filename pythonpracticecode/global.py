def func():
    global x
    print('x is ', x)
    x = 23
    print('change the global x to ',x)
x = 50
func()
print('x has been changed in the function',x)
