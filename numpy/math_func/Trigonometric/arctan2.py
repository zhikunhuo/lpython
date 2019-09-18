import matplotlib.pylab as plt
import numpy as np

x = np.array([-1, +1, +1, -1])
y = np.array([-1, -1, +1, +1])
b = np.arctan2(y,x) * 180 /np.pi
print(b)