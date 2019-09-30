import numpy as np

palette = np.array( [ [0,0,0],                # black
                       [255,0,0],              # red
                       [0,255,0],              # green
                       [0,0,255],              # blue
                        [255,255,255] ] )       # white
print("palette: ", palette)

j = np.array( [1,2] )
print("palette[j]: ", palette[j])