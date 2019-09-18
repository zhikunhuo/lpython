import matplotlib.pylab as plt
import numpy as np

x = np.linspace(-np.pi, np.pi, 100)
plt.plot(x, np.tan(x))
plt.xlabel('Angle [rad]')
plt.ylabel('tan(x)')
plt.axis('tight')
plt.show()