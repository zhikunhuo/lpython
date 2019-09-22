import numpy as np

print("signbit -1.2: ",np.signbit(-1.2))

print("signbit [1,-2.3, 2.1, 0]: ",np.signbit(np.array([1,-2,3,2.1,0])))