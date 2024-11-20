#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
	srand(time(NULL));
	
	int num1 = 50 + rand() % 151;
	
	int result = num1 % 2 == 0;
	
	printf("Num1: %d and its: %d", num1, result);
	
	
	return 0;
}
