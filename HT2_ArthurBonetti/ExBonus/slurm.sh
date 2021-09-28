#!/bin/bash

# a sample job submission script to submit an MPI job 

# please change the --partition option if you want to use another partition 



#SBATCH --job-name=scaling_mpi4py_8



# send output to scaling_mpi4py_2.out

#SBATCH --output=scaling_mpi4py_8.out



# send output scaling_mpi4py_2.err

#SBATCH --error=scaling_mpi4py_8.err



# receive an email when job starts, ends, and fails

#SBATCH --mail-type=BEGIN,END,DAIL



# this job requests 2 cores. Cores can be selected from various nodes.

#SBATCH --ntasks=8



# there are many partitions on Alphacruncher and it is important to specify which

# partition you want to run your job on. Not having the following option, the

#SBATCH --partition=eduq

module load python-3.6.5-intel-17.0.6-adb26hh

mpirun python print_pi.py
