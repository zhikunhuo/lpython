import numpy as np

print("Min [2, 3, 4], [1, 5, 2]: ", np.minimum([2, 3, 4], [1, 5, 2]))
print("Min np.eye(2), [0.5, 2]: ", np.minimum(np.eye(2), [0.5, 2]))
print("Min [np.nan, 0, np.nan], [0, np.nan, np.nan]: ", np.minimum([np.nan, 0, np.nan], [0, np.nan, np.nan]))
print("Min np.Inf, 1: ", np.minimum(np.Inf, 1))
