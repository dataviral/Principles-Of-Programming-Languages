#include "headers.h"


int main(int argc, char **argv){

	// Get Numbers from Command Line
	int x= atoi(argv[1]); // *(*(argv+1)+0)
	int y= atoi(argv[2]); 

	printf("x:%d\t y:%d\n\n",x, y );
	
	printf("Addition :%d\n", mathOp(x,y, add));
	printf("Subtraction :%d\n", mathOp(x,y, subtract));
	printf("Multiplication :%d\n", mathOp(x,y, multiply));
	printf("Division :%d\n", mathOp(x,y, divide));
	printf("Addition :%d\n", mathOp(x,y, add));
	printf("Subtraction :%d\n", mathOp(x,y, subtract));
	printf("Multiplication :%d\n", mathOp(x,y, multiply));
	
	return 0;
}