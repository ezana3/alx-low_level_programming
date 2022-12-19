#include "main.h"
#include "stdio.h"

/**
 * print_array - prints n elements.
 * @a: int a
 * @n: int n
 */

void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}
	printf("\n");
}
