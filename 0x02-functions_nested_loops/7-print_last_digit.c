#include "main.h"

/**
 * print_last_digit - prints last digit.
 * @x: character.
 * Return: Always 0;
 */
int print_last_digit(int x)
{
	int n;

	if (n < 0)
	{
		n = -n;
		n = x % 10;
		_putchar(x + '0');
		return (n % 10);
	}
}
