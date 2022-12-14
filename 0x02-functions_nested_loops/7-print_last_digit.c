#include "main.h"

/**
 * print_last_digit - prints last digit.
 * @x: character.
 * Return: Always 0;
 */
int print_last_digit(int x)
{
	int n = x;

	if (x)
	{
		n = (x % 10);
		_putchar(n);
	}
	return (0);
}
