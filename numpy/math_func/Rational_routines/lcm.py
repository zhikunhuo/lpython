import numpy as np

print("lcm (12, 20): ", np.lcm(12,20))
print("lcm (3, 12, 20): ", np.lcm.reduce([3,12,20]))
print("lcm (40, 12, 20)(40, 12, 20): ", np.lcm.reduce([40,12,20]))
print("lcm arange(6): ", np.lcm(np.arange(6),20))