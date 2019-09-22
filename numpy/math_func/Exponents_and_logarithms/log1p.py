import numpy as np
import matplotlib.pyplot as plt


x = np.linspace(-0.9, 100, 3000)
plt.plot(x, np.log1p(x))
plt.xlabel('Angle [rad]')
plt.ylabel('log1p(x)')
plt.axis('tight')
plt.show()