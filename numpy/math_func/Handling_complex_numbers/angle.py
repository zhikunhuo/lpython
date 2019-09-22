import numpy as np

print("angle [1.0, 1.0j, 1+1j]: ", np.angle([1.0, 1.0j, 1+1j]))
print("angle 1+1j, deg=True: ", np.angle(1+1j, deg=True))