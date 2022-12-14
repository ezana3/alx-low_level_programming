#include "main.h"

/**
 * print_alphabet_x10 - prints 10x alphabet
 */

void print_alphabet_x10(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x * 10);
	}
	_putchar('\n')
}
