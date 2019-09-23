import numpy as np

print("fmin [2, 3, 4], [1, 5, 2]: ", np.fmin([2, 3, 4], [1, 5, 2]))
print("fmin np.eye(2), [0.5, 2]: ", np.fmin(np.eye(2), [0.5, 2]))
print("fmin [np.nan, 0, np.nan], [0, np.nan, np.nan]: ", np.fmin([np.nan, 0, np.nan], [0, np.nan, np.nan]))
print("fmin np.Inf, 1: ", np.fmin(np.Inf, 1))
