#!/bin/bash -l

#SBATCH --ntasks=1
#SBATCH --ntasks-per-node=1
#SBATCH --cpus-per-task=1

#SBATCH --time=00:02:00


#SBATCH --job-name=ellipse
#SBATCH --output=ellipse_output.out
#SBATCH --error=ellipse_error.err

#SBATCH --partition=eduq

export OMP_NUM_THREADS=1


### executable
./Ex1.cpp.exec

