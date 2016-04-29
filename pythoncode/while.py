number  = 23
running = True
while running:
    guess = int(input('enter an integer'))
    if guess == number:
        print('congratulations')
        running = False
    elif guess < number:
        print('no it is a little higher')
        #break 也可以用break
    else:
        print('no it is a little lower')
else:
    print('the while loop is over')
print('Done')
#while-else与C 语言不同
