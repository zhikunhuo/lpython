import numpy as np

print("subtract 1.0,4.0: ", np.subtract(1.0,4.0))
x1 = np.arange(9.0).reshape((3,3))
print("x1: ", x1)
x2 = np.arange(3.0)
print("x2: ", x2)
print("subtract x1, x2: ", np.subtract(x1,x2))