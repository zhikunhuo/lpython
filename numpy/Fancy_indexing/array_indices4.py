import numpy as np

palette = np.array( [ [0,0,0],                # black
                       [255,0,0],              # red
                       [0,255,0],              # green
                       [0,0,255],              # blue
                        [255,255,255] ] )       # white
print("palette: ", palette)

image = np.array( [ [ 0, 1, 2, 0 ],           # each value corresponds to a color in the palette
                    [ 0, 3, 4, 0 ]] )
print("palette[image]: ", palette[image])