import numpy as np

print('copysign (1.3, -1): ', np.copysign(1.3, -1))
print('copysign (0, 1): ', np.copysign(0, 1))
print('copysign (0, -1): ', np.copysign(0,-1))
print('copysign [-1,0, 1], -1.1:', np.copysign([-1, 0, 1], -1.1))
a = np.arange(4) - 3
print("a: ", a)
print('copysign [-1,0,1,2 ], a:', np.copysign([-1,0,1, 2], a))