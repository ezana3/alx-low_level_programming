#include "main.h"

/**
 * _puts - print sting with new line.
 * @str: string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
