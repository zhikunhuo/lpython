import numpy as np

print("nancumprod 1:", np.nancumprod(1))
print("nancumprod [1]: ", np.nancumprod([1]))
print("nancumprod [1, np.nan]: ", np.nancumprod([1, np.nan]))
a = np.array([[1, 2], [3, np.nan]])
print("namcumprod [[1, 2], [3, np.nan]: ", np.nancumprod(a))
print("namcumprod [[1, 2], [3, np.nan], axis=0: ", np.nancumprod(a, axis=0))
print("namcumprod [[1, 2], [3, np.nan], axis=1: ", np.nancumprod(a, axis=1))
