import numpy as np

import sys
import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt


#defining relevant variables
CPU = [1,2,4,8]
Time = [48.47,24.05,16.61,16.96]
Speedup = [1, 2.015, 2.918, 2.858]
Efficiency = [1, 1.0075, 0.7295, 0.35725]

    
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
