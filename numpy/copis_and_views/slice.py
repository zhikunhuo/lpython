import numpy as np

a= np.arange(12)
a.shape=3,4
print("a: ", a)
s= a[:,1:3]
s[:] = 10
print("*********")
print("a: ", a)