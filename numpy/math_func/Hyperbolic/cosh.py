import matplotlib.pylab as plt
import numpy as np


x = np.linspace(-2, 2, 200)
plt.plot(x, np.cosh(x))
plt.xlabel('Angle [rad]')
plt.ylabel('cosh(x)')
plt.axis('tight')
plt.show()