#include "main.h"

/**
 * print_sign -> prints the sign of a number.
 * @n: character
 * Return: always 0;
 */

int print_sign(int n)
{
	if (n < 1)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		return (0);
	}
}
