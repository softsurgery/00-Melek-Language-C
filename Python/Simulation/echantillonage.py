from math import sin

def f(x):
    return sin(x) - 1 

a = 0
b = 2
n = 10000

echantillons = []

pas = (b-a)/(n-1)

for i in range(n):
    echantillon = a + i * pas
    res = f(echantillon)
    echantillons.append(round(res,4))

print(echantillons)