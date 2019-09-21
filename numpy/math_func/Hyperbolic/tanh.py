import matplotlib.pylab as plt
import numpy as np


x = np.linspace(-4, 4, 400)
plt.plot(x, np.tanh(x))
plt.xlabel('Angle [rad]')
plt.ylabel('tanh(x)')
plt.axis('tight')
plt.show()