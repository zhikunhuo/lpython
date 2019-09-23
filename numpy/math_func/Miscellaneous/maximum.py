import numpy as np

print("Max [2, 3, 4], [1, 5, 2]: ", np.maximum([2, 3, 4], [1, 5, 2]))
print("Max np.eye(2), [0.5, 2]: ", np.maximum(np.eye(2), [0.5, 2]))
print("Max [np.nan, 0, np.nan], [0, np.nan, np.nan]: ", np.maximum([np.nan, 0, np.nan], [0, np.nan, np.nan]))
print("Max np.Inf, 1: ", np.maximum(np.Inf, 1))
