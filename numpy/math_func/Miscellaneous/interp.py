import numpy as np
import matplotlib.pyplot as plt

xp = [1, 2, 3]
fp = [3, 2, 0]
print("xp: ", xp)
print("fp: ", fp)
print("interp xp, fp: ", np.interp(2.5, xp, fp))
print("interp [0, 1, 1.5, 2.72, 3.14], xp, fp: ", np.interp([0, 1, 1.5, 2.72, 3.14], xp, fp))
UNDEF = -99.0
print("interp 3.14, xp, fp, right=UNDEF: ", np.interp(3.14, xp, fp, right=UNDEF))

x = np.linspace(0, 2*np.pi, 10)
y = np.sin(x)
xvals = np.linspace(0, 2*np.pi, 50)
yinterp = np.interp(xvals, x, y)
plt.plot(x, y, 'o')
plt.plot(xvals, yinterp, '-x')
plt.show()