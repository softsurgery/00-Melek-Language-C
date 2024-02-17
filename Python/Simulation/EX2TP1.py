from math import pi
import numpy as np
from fractions import Fraction
v = np.array([pi/4, pi/2, 3*pi/4, pi])
print(v)
w = np.sin(v)

for elem in w:
    print(Fraction(elem))