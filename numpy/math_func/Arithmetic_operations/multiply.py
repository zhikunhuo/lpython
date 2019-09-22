import numpy as np

print("multiply (2.0 4.0): ", np.multiply(2.0, 4.0))

x1 = np.arange(9.0).reshape((3, 3))
x2 = np.arange(3.0)
print("x1: ", x1)
print("x2: ", x2)
print("multiply (x1 x2): ", np.multiply(x1,x2))