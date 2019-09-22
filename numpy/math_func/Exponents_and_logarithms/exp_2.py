import numpy as np
import matplotlib.pyplot as plt


x = np.linspace(-4, 4, 3000)
plt.plot(x, np.exp(x))
plt.xlabel('Angle [rad]')
plt.ylabel('exp(x)')
plt.axis('tight')
plt.show()