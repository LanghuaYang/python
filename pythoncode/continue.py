while True:
    i = int(input("enter an integer"))
    if i == 23:
        print('yes you are right')
        break
    if i ==32:
        continue #跳过loop中的剩余语句，继续loop
    print("the input is neither 23 nor 32")
print("Done")
