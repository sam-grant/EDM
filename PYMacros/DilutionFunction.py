#A1(L) = (1/6) * L(-4L^2 + 3L + 6); //integral of numerator
#A2(L) = (1/6) * L(-8L^2 + 15L + 30); // integral of first term in denominator 
#A3(L) = (1/6) * L(16L^2 - 3L - 6); // integral of second term in denominator

import numpy as np
import matplotlib.pyplot as plt

def A1(L):
    return (1/6) * L * (-4*L*L + 3*L + 6)

def A2(L):
    return (1/6) * L * (-8*L*L + 15*L + 30)

def A3(L):
    return (1/6) * L * (16*L*L - 3*L - 6)

npoints = 12
L = np.linspace(0.0, 1.0, npoints)
halfstep = npoints/2.0
phase = np.pi/2.0
gamma = 29.3
delta = 0.05

avg = []
for i,L1 in enumerate(L):
    # print(L1)
    if i == 0:
        continue
    L0 = L[i-1]
    numerator = (A1(L1) - A1(L0)) * np.sin(phase) * np.sin(delta);
    denominator=  gamma *  ( (A2(L1) - A2(L0)) + (A3(L1) - A3(L0))*np.cos(phase) )

    final = numerator/denominator
    avg.append(1000*final)

mid = [i+halfstep for i in L[:-1]]


plt.scatter(mid, avg)
plt.show()
