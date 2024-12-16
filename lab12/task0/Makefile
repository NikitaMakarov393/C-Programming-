main: main.o background.o read_pipe.o write_pipe.o
	gcc -o main main.o background.o read_pipe.o write_pipe.o

main.o: app/main.c
	gcc -c app/main.c

background.o: background/background.c
	gcc -c background/background.c

read_pipe.o: pipes/read_pipe.c
	gcc -c pipes/read_pipe.c

write_pipe.o: pipes/write_pipe.c
	gcc -c pipes/write_pipe.c

clean: 
	rm -rf *.o main
