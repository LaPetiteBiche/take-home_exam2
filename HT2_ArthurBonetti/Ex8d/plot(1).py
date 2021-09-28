import numpy as np

import sys
import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt


#defining relevant variables
It = [1,2,3]
Error2 = [11.488971,7.133656 ,6.324659]


    
#plotting
fig, ax = plt.subplots( nrows=1, ncols=1 ) # create figure & 1 axis
ax.plot(It, Error2)
ax.set_ylabel('Error')
ax.set_xlabel('Iterations')
fig.savefig('convergence.png') # save the figure to file
plt.close(fig) # close the figure window
plt.savefig(sys.stdout.buffer)
