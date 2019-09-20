import matplotlib.pylab as plt
import numpy as np


x = np.linspace(-5, 5, 200)
plt.plot(x, np.sinh(x))
plt.xlabel('Angle [rad]')
plt.ylabel('sinh(x)')
plt.axis('tight')
plt.show()