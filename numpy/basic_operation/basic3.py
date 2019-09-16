import numpy as np

a = np.ones((2,3), dtype=int)
b = np.random.random((2,3))
print("**********a****")
print('a:', a)
print("**********b****")
print('b:', b)
a *=3
print("**********a *=3****")
print("a:", a)
b +=a
print("**********b +=a****")
print("b:", b)

a +=b
print("**********a +=b****")
print("a:", a)