import cmath
from math import pi

a = 2 + 2j
b = 1 + 1j

print("a + b = ",a+b)

print("a x b = ",a*b)

print("a / b = ",a/b)

a_ = a.conjugate()
print("a_ = ",a_)

print("Re(a) = ",a.real)

b_ = b.conjugate()
print("Imag(b_) = ",b_.imag)

print("|a| = ",abs(a))

argb_rad = cmath.phase(b)
argb_deg = argb_rad*180/pi
print("arg(b) = ",argb_deg)
