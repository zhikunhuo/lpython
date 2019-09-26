import numpy as np

a = np.floor(10 * np.random.random((3,4)))
print("Array a: ", a)
print("********")
print("A shape: ", a.shape)
print("********")
print("A ravel: ",a.ravel())
print("********")
print("A reshape: ",a.reshape(6,2))
print("********")
print("A T: ",a.T)
print("A T shape: ",a.T.shape)
print("A shape: ", a.shape)


