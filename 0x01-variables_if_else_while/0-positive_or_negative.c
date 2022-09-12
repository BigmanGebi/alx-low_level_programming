#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 *
 * Return: always return 0
*/
int main(void)
{
	int n;
	int lastn;

	srand(time (0));
	n = rand() - RAND_MAX / 2;
	lastn = n % 10;

	if (lastn > 5);
	{
		printf("last digit of %d is  greater than 5\n", lastn);
	} if (lastn == 0);
	{	
		printf("last digit of %d is  0\n", lastn);
	} 
	{
		printf("last digit of %d is less than 6 and not 0\n", lastn);
	}
return (0);
}

