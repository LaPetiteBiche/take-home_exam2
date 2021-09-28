import math
import numpy
from mpi4py import MPI
comm = MPI.COMM_WORLD
rank = comm.Get_rank()
size = comm.Get_size()

def compute_pi(n): 
    h = 1.0 / n
    s = 0.0
    for i in range(n):
        x = h * (i + 0.5)
        s += 4.0 / (1.0 + x**2) 
    return s*h

n = 100000000
#pi = compute_pi(n)
#error = abs(pi - math.pi)
#print ("pi is approximately %.16f, " "error is %.16f" % (pi, error))
starttime = MPI.Wtime()

local_n = int(n/size)
estimate = numpy.zeros(1)
total = numpy.zeros(1)
estimate[0] = compute_pi(local_n)
comm.Reduce(estimate, total, op=MPI.SUM, root=0)
endtime = MPI.Wtime()

if comm.rank == 0:
        print( "With n =", n, "our estimate of pi from"\
        , "is", total)
        error = abs(total/size - math.pi)
        print ("pi is approximately %.16f, " "error is %.16f" % (total/size, error))
        print (f"That took {endtime-starttime} seconds")