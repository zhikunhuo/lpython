import numpy as np
import matplotlib.pyplot as plt


prob1 = np.log2(1e-50)
prob2 = np.log2(2.5e-50)
prob12 = np.logaddexp2(prob1, prob2)
print("prob12: ", prob12)
print(np.exp2(prob12))