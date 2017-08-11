#include "headers.h"

int add(int x, int y){
	return x+y;
}

int multiply(int x, int y){
	return x*y;
}

int divide(int x, int y){
	return x/y;
}

int subtract(int x, int y){
	return x-y;
}

int mathOp(int x, int y, int(*mathfunction)(int x, int y)){
	return mathfunction(x,y);
}