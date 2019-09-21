import numpy as np

a = np.array([[1,2,3], [4,5,6]])
print("cumsum [[1,2,3], [4,5,6]]: ", np.cumsum(a))
print("cumsum [[1,2,3], [4,5,6]] dtype=float: ", np.cumsum(a, dtype=float))
print("cumsum [[1,2,3], [4,5,6]]  axis = 0: ", np.cumsum(a, axis = 0))
print("cumsum [[1,2,3], [4,5,6]]  axis = 1: ", np.cumsum(a, axis = 1))