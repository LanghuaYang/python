import sys
try:
        s = input('Enter something --> ')
except EOFError:#ctrl+d 会引发一个EOF错误
        print('\nWhy did you do an EOF on me?')
        sys.exit() # exit the program
except:
        print('\nSome error/exception occurred.')
print('Done')
