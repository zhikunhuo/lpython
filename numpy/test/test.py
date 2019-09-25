import numpy as np

x = int(input("Input x: "))
y = int(input("Input y: "))
z = int(input("Input z: "))

def factorial(y):
    a = 1
    for index in range(1, y+1):
        a=a*index    
    return a

result_factorial = factorial(y)
result = np.power(x, result_factorial) 
print(" factorial,10: ", factorial(10))

    