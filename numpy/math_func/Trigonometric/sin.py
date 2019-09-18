import matplotlib.pylab as plt
import numpy as np

x = np.linspace(0, 2* np.pi, 201)
plt.plot(x, np.sin(x))
plt.xlabel('Angle [rad]')
plt.ylabel('sin(x)')
plt.axis('tight')
plt.show()