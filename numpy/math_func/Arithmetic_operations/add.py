import numpy as np

print("Add 1.0 and 4.0: ", np.add(1.0, 4.0))
x1 = np.arange(9.0).reshape((3, 3))
x2 = np.arange(3.0)
print("x1: ", x1)
print("x2: ", x2)
print("x1+x2: ", np.add(x1, x2))