import numpy as np

print("gcd(12, 20): ", np.gcd(12,20))

print("gcd[15,25,35]: ", np.gcd.reduce([15,25,35]))

print("gcd[15,25,35]: ", np.gcd(np.arange(6),20))