import matplotlib.pylab as plt
import numpy as np

x = np.linspace(-np.pi/2, np.pi *3/2, 201)
plt.plot(x, np.cos(x))
plt.xlabel('Angle [rad]')
plt.ylabel('cos(x)')
plt.axis('tight')
plt.show()