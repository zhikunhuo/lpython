import matplotlib.pylab as plt
import numpy as np


x = np.linspace(np.e, 10, 400)
plt.plot(x, np.arccosh(x))
plt.xlabel('Angle [rad]')
plt.ylabel('arccosh(x)')
plt.axis('tight')
plt.show()