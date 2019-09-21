import numpy as np

a = np.array([[1, 2, 3], [4, 5, 6]])
print("cumprod [[1, 2, 3], [4, 5, 6]:", np.cumprod(a))
print("cumprod [[1, 2, 3], [4, 5, 6] axis=0:", np.cumprod(a, axis=0))
print("cumprod [[1, 2, 3], [4, 5, 6] axis=1:", np.cumprod(a, axis=1))
