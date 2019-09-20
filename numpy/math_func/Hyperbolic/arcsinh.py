import matplotlib.pylab as plt
import numpy as np


x = np.linspace(-10, 10, 400)
plt.plot(x, np.arcsinh(x))
plt.xlabel('Angle [rad]')
plt.ylabel('arcsinh(x)')
plt.axis('tight')
plt.show()