#include "main.h"

/**
 * print_last_digit - prints last digit.
 * @x: character.
 * Return: Always 0;
 */
int print_last_digit(int x)
{
	if(x)
	{
		x = (x%10);
		return (x);
	}
}
