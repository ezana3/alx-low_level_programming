#include "main.h"

/**
 * _strcat - fucnction strcat
 * @dest: firts string
 * @src: second string
* Return: a concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
