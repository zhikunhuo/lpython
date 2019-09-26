import numpy as np

a = np.arange(10)**3
print("a: ", a)
print("a[2]: ", a[2])
print("a[5]: ", a[5])
print("a[2:5]: ", a[2:5])
a[:6:2] = -1000
print("a[:6:2] = -1000 : ", a)
print("a[ : :-1] : ", a[ : :-1])
print("a : ", a)
for i in a:
    print(i**(1/3.))