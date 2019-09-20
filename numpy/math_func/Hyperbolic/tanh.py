import matplotlib.pylab as plt
import numpy as np


x = np.linspace(np.e, 10.0, 400)
plt.plot(x, np.tanh(x))
plt.xlabel('Angle [rad]')
plt.ylabel('tanh(x)')
plt.axis('tight')
plt.show()