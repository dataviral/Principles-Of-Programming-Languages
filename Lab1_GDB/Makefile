CC = gcc
CCFlags = -g -o 
OutFile = lab1.out
all: full
full: functions main
	$(CC) func.o main.o $(CCFlags) $(OutFile)
functions: func.c
	$(CC) -c -g func.c
main: main.c
	$(CC) -c -g main.c