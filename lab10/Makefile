lab10.o: lab10.c
    gcc -c lab10.c

lab10_1.o: lab10_1.c
    gcc -c lab10_1.c

main: lab10_1.o lab10.o
    gcc -o main lab10_1.o lab10.o

clear: 
    rm -rf *.o main
