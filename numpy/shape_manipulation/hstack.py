import numpy as np

a = np.floor(10 * np.random.random((2,2)))
print("Array a:", a)
print("*********")
b = np.floor(10 * np.random.random((2,2)))
print("Array b :", b)
print("*********")
print("hstack a，b :", np.hstack((a,b)))