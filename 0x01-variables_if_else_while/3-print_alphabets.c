#include <stdio.h>

/**
 * main - returns value
 * Return: always 0;
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'a'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n')
	return (0);
}
