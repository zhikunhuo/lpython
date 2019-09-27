import numpy as np

a= np.arange(12)
a.shape=3,4
print("Array a: ", a)
c = a.view()
print("c is a: ", c is a)
print("c base is a: ", c.base is a)
print("c.flags.owndata: ", c.flags.owndata)
c.shape = 2,6
print("C shape: ", c.shape)
print("A shape: ", a.shape)
c[0,4] = 1234 
print("Array C : ", c)
print("Array A : ", a)