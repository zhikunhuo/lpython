import numpy as np

a= np.arange(12)
print("a: ", a)
b =a 
print("b is a: ", b is a)
b.shape = 3, 4
print("a.shape: ", a.shape)