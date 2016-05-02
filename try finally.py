import time
try:
        f = open('test.txt')
        while True:
                line = f.readline()
                if len(line) == 0:
                        break
                time.sleep(2)
                #调用时钟的sleep程序停顿2秒，这样就可以用ctrl+c来中断程序
                print(line)
finally:
        #无论程序是否正常停止，都会调用finally块中的语句来关闭文件
        f.close()
        print('close the file')
