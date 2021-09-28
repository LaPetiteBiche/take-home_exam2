import numpy as np

import sys
import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt


#defining relevant variables
CPU = [1,2,4,8,16]
Time = [59.39,45.28,23.19,12.12,6.74]
Speedup = [1, 1.31, 2.56, 4.9, 8.81]
Efficiency = [1, 0.655, 0.64, 0.6125, 0.42125]

    
#plotting
fig, ax = plt.subplots( nrows=1, ncols=1 ) # create figure & 1 axis
ax.plot(CPU, Speedup)
ax.set_ylabel('Speedup')
ax.set_xlabel('CPU')
fig.savefig('speedup.png') # save the figure to file
plt.close(fig) # close the figure window
plt.savefig(sys.stdout.buffer)

fig, ax = plt.subplots( nrows=1, ncols=1 ) # create figure & 1 axis
ax.plot(CPU, Efficiency)
ax.set_ylabel('Efficiency')
ax.set_xlabel('CPU')
fig.savefig('efficiency.png') # save the figure to file
plt.close(fig) # close the figure window
plt.savefig(sys.stdout.buffer)
