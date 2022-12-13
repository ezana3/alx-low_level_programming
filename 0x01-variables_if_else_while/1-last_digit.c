#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entery value
 * Return: value 0;
 */
int main(void)
{
	int n;
	int x;

	srandlj(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (a > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, x);
	}
	else if (a == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, x);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	return (0);
}
