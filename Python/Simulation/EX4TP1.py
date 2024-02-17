import numpy as np
import matplotlib.pyplot as plt

x = np.linspace(0,10*np.pi,1000)
ycos = np.cos(x)
yecos = ycos * np.exp(-x/10)

plt.plot(x, ycos,color='r') 
plt.plot(x, yecos,color='b')
plt.title("Comparison entre RLC force et RLC amortie en fonction de y = sin(w)")
plt.xlabel("w")
plt.ylabel("sin(w)")
plt.show()
