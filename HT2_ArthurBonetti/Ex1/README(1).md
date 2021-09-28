There are two alternative ways to run a code:
1. You can compile and run it manually in terminal using
    g++ Ex1.cpp -o Ex1.x
    ./Ex1.x
2. You can use makefile using
    make
    ./Ex1.cpp.exec
3. If you want to remove executalble Ex1.cpp.exec you type
    make clean
4. With the slurm.sh
    make
    sbatch slurm.sh
    ./Ex1.cpp.exec

Cleaning (make clean) can be done only for executables created through make. If you want to remove manually created executables (like Ex1.x), you should again manually run in terminal 'rm -f Ex1.x' or 'rm -f *.x'
   