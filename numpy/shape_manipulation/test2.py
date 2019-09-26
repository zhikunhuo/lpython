import numpy as np

a = np.floor(10 * np.random.random((3,4)))
print("Array a: ", a)
print("A shape: ", a.shape)
print("*************")
a.resize(2,6)
print("A resize(2 ,6): ", a)
print("A shape: ", a.shape)
