import numpy as np

eps = np.finfo(float).eps
x = np.arange(4.)
b=x**2 - (x + eps)**2
print(b)
print("**************")
np.set_printoptions(suppress=True)
print(b)