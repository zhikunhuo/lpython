import numpy as np
import cv2 as cv

img = cv.imread(".././datasheet/len_top.jpg",cv.IMREAD_UNCHANGED )
cv.imshow('lenna',img)
cv.waitKey(0)
cv.destroyAllWindows()
cv.imwrite('save.png',img)