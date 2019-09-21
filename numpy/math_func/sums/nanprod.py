import numpy as np


print("product x: ", np.prod([1]))
print("product empty: ", np.nanprod([1]))

print("product [1,np.nan]:", np.nanprod([1,np.nan]))

print("product [[1, 2], [3, np.nan]: ", np.nanprod([[1, 2], [3, np.nan]]))

print("product [[1, 2], [3, np.nan],axis=1: ", np.nanprod([[1, 2], [3, np.nan]], axis=1))

