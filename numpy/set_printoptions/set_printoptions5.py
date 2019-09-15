import numpy as np

a = np.arange(10000).reshape(100,100)
np.set_printoptions(threshold=10000)
print(a)