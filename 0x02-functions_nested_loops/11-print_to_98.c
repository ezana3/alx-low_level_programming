#include "main.h"

/**
 * print_to_98 - prints natural numbers upto 98.
 * @n: number.
 * Return: Always 0;
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			print("%d, ", n++);
		printf("%d\n", n);
	}
}
