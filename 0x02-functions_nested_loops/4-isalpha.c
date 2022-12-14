#include "main.h"

/**
 * _isalpha -> Prints alphabetic character.
 * @c:  is Character.
 * Return: Always zero;
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
