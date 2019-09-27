import numpy as np

a= np.arange(12)
a.shape=3,4
print("Array a: ", a)
d = a.copy()
print("d is a: ", d is a)
print("d.base is a: ", d.base is a)
d[0,0] = 9999
print("Array D : ", d)
print("Array A : ", a)