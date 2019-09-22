import numpy as np
import matplotlib.pyplot as plt


x = np.linspace(-4, 4, 3000)
plt.plot(x, np.expm1(x))
plt.xlabel('Angle [rad]')
plt.ylabel('expm1(x)')
plt.axis('tight')
plt.show()