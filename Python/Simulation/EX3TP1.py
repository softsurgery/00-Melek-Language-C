import numpy as np

num = 5
#retourne un tableau de taille num ne contenant que des 0.
v0 = np.zeros(num)
#retourne un tableau de taille num ne contenant que des 1.
v1 = np.ones(num)


#retourne un ´echantillonage uniforme de l’intervalle [a, b] de taille n
a = 0
b = 1
n = 20
vu = np.linspace(a,b,20)
#vu = np.array([a + i*((b-a)/(n-1)) for i in range(n)])

print(vu)

#n vecteur de taille n dont les ´el´ements sont tir´es al´eatoirement entre 0 et 1
a = 0
b = 1
n = 10
vr = np.random.uniform(a,b,n)

print(vr)