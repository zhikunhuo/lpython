import matplotlib.pylab as plt
import numpy as np

phase = np.linspace(0, np.pi, num=5)

phase[3:] += 3*np.pi
print(phase)

phase2 = np.unwrap(phase)
print(phase2)
print(phase)
phase5=np.array([np.pi, 3*np.pi])
print("aaaaa")
print(phase5)
phase6=np.unwrap(phase5)
print(np.unwrap(phase6))