import numpy as np
import matplotlib.pyplot as plt


x = np.linspace(-10, 10, 3000)
plt.plot(x, np.exp2(x))
plt.xlabel('Angle [rad]')
plt.ylabel('exp2(x)')
plt.axis('tight')
plt.show()