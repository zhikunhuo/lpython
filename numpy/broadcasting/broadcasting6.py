import numpy as np

x = np.arange(4)
xx = x.reshape(4,1)
y = np.ones(5)
z = np.ones((3,4))
print("x: ", x)
print("xx: ", xx)
print("y: ", y)
print("z: ", z)
print("xx+y: ", xx+y)
print("x + z: ", x + z)