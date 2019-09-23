import numpy as np

print("fmax [2, 3, 4], [1, 5, 2]: ", np.fmax([2, 3, 4], [1, 5, 2]))
print("fmax np.eye(2), [0.5, 2]: ", np.fmax(np.eye(2), [0.5, 2]))
print("fmax [np.nan, 0, np.nan], [0, np.nan, np.nan]: ", np.fmax([np.nan, 0, np.nan], [0, np.nan, np.nan]))
print("fmax np.Inf, 1: ", np.fmax(np.Inf, 1))
