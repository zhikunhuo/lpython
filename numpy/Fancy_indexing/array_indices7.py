import numpy as np


a = np.arange(5)
print("a: ", a)
a[[1,3,4]] = 0
print("a: ", a)
a[[0,0,2]]=[1,2,3]
print("a: ", a)
a[[0,0,2]]+=1
print("a: ", a)