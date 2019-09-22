import numpy as np

print("convolve([1, 2, 3], [0, 1, 0.5]): ",np.convolve([1, 2, 3], [0, 1, 0.5]))
print("convolve([1,2,3],[0,1,0.5], 'same': ", np.convolve([1,2,3],[0,1,0.5], 'same'))
print("convolve([1,2,3],[0,1,0.5], 'valid': ", np.convolve([1,2,3],[0,1,0.5], 'valid'))