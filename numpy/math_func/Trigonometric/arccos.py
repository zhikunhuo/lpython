import matplotlib.pylab as plt
import numpy as np

x = np.linspace(-1, 1,2000)
plt.plot(x, np.arccos(x))
plt.xlabel('Float')
plt.ylabel('arccos(x)')
plt.axis('tight')
plt.show()