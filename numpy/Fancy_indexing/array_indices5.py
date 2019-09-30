import numpy as np

a= np.arange(12).reshape(3,4)
print("a: ", a)
i = np.array( [ [0,1],                        # indices for the first dim of a
                [1,2] ] )
j = np.array( [ [2,1],                        # indices for the second dim
                 [3,3] ] )

print("a[i,j]: ",a[i,j])	

print("a[i,2]: ",a[i,2])	
print("a[:,j]: ",a[:,j])			 
				 
				 