import numpy as np
import matplotlib.pyplot as plt


x = np.linspace(0.1, 100, 3000)
plt.plot(x, np.log10(x))
plt.xlabel('Angle [rad]')
plt.ylabel('exp2(x)')
plt.axis('tight')
plt.show()