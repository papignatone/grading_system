
# Target creates executable files
cis158g1: cis158g1.o grades.o
        gcc cis158g1.o grades.o -o cis158g1 -lm


# Target creates object files
cis158g1.o: cis158g1.c grades.h
        gcc -c cis158g1.c


# Target creates object files
grades.o: grades.c grades.h
        gcc -c grades.c

# Target deletes all object files
clean:
        rm *.o
