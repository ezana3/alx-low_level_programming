#include "main.h"

/**
 * print_last_digit - prints last digit.
 * @n: character.
 * Return: Always 0;
 */
int print_last_digit(int n)
{
	int ld = n % 10;


	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (0);
}
