import numpy as np

a= np.arange(10)
print("a: ", a)
print("clip a (1, 8): ", np.clip(a, 1, 8))
print("clip a (3, 6),out=a: ", np.clip(a, 3, 6, out=a))

print("clip a [3, 4, 1, 1, 1, 4, 4, 4, 4, 4], 8: ", np.clip(a, [3, 4, 1, 1, 1, 4, 4, 4, 4, 4], 8))