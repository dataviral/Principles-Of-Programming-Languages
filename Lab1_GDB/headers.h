#include <stdio.h>
#include <stdlib.h>

int add(int, int);
int subtract(int, int);
int multiply(int, int);
int divide(int, int);
int mathOp(int x, int y, int(*mathfunction)(int x, int y));