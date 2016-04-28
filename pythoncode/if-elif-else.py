number = 23
guess = int(input('enter a number:'))
if guess == number:
    print('congratulations')
elif guess < number:
    print('no it is a little higher')
else:
    print('no it is a little lower')
print('done')
