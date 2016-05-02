def powersum(power, *args):
        '''Return the sum of each
        argument raised to specified
        power.'''
        total = 0
        for i in args:
                total += pow(i, power)
        return total
def powersum1(power, args):
        '''Return the sum of each
        argument raised to specified
        power.'''
        total = 0
        for i in args:
                total += pow(i, power)
        return total
print(powersum(2,3,4))
print(powersum(2,10))
list1 = [2,3,4]
print(powersum1(2,list1))
