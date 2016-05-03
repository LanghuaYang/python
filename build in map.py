def f(x):
        return x*x
r = map(f,[1,2,3,4,5])
print(list(r))

t = map(lambda x: x*x, [1,2,3,4,5])
print(list(t))
