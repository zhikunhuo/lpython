import numpy as np

a = np.array([4.,2.])
b = np.array([3.,8.])
c = np.column_stack((a,b))
print("column_stack a，b :", c)
print("hstack a，b :", np.hstack((a,b)))