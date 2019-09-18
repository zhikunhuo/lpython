import matplotlib.pylab as plt
import numpy as np


x = np.linspace(-10, 10)

plt.plot(x, np.arctan(x))

plt.axis('tight')

plt.show()