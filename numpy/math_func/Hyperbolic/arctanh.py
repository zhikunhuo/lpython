import matplotlib.pylab as plt
import numpy as np


x = np.linspace(-0.99, 0.99, 400)
plt.plot(x, np.arctanh(x))
plt.xlabel('Angle [rad]')
plt.ylabel('arctanh(x)')
plt.axis('tight')
plt.show()