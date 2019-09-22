import numpy as np
import matplotlib.pyplot as plt


prob1 = np.log(1e-50)
prob2 = np.log(2.5e-50)
prob12 = np.logaddexp(prob1, prob2)
print("prob12: ", prob12)
print(np.exp(prob12))