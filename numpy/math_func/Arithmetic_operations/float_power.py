import numpy as np

x1 = range(6)
print("x1: ", x1)
print("float_power x1: ", np.float_power(x1,3))
x2 = [1.0, 2.0, 3.0, 3.0, 2.0, 1.0]
print("x2: ", x2)
print("float_power x1, x2: ", np.float_power(x1,x2))
x2 =  np.array([[1, 2, 3, 3, 2, 1], [1, 2, 3, 3, 2, 1]])
print("x2: ", x2)
print("float_power x1, x2: ", np.float_power(x1,x2))