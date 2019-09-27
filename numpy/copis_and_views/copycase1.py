import numpy as np

a = np.arange(int(1e8))
b = a[:100].copy()
del a
print("B :", b)