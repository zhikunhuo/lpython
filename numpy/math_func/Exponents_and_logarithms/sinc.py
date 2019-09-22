import numpy as np
import matplotlib.pyplot as plt


x = np.linspace(-4, 4, 3000)
plt.plot(x, np.sinc(x))
plt.xlabel('Angle [rad]')
plt.ylabel('sinc(x)')
plt.axis('tight')
plt.show()