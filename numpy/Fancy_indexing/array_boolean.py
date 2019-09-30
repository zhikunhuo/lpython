import numpy as np

a = np.arange(12).reshape(3,4)
print("a: ", a)
b = a >4
print("b: ", b)
print("a[b]: ", a[b])