import numpy as np
import matplotlib.pyplot as plt

x = np.array([-1.2, 1.2])
print("absolute [-1.2, 1.2] :", np.absolute(x))
print("absolute (1.2 + 1j) :", np.absolute(1.2+1j))

x = np.linspace(start=-10, stop=10, num=101)
#plt.plot(x, np.absolute(x))
#plt.show()
xx = x + 1j * x[:, np.newaxis]
plt.imshow(np.abs(xx), extent=[-10, 10, -10, 10], cmap='gray')
plt.show()