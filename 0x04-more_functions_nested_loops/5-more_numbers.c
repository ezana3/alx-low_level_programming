#include "main.h"

/**
 * more_numbers - print more num
 */

void more_numbers(void)
{
	int x, y;

	for (x = 1; x <= 10; x++)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y >= 0)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar ('\n');
	}
}
