import numpy as np
import matplotlib.pyplot as plt


x = np.linspace(0.1, 100, 3000)
plt.plot(x, np.log2(x))
plt.xlabel('Angle [rad]')
plt.ylabel('log2(x)')
plt.axis('tight')
plt.show()