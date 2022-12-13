#include <stdio.h>

/**
 * main - proccess value
 *
 * Return: return 0
 */

int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);
	putchar('\n');
	return (0);
}
