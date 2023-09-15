#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: char to be checked
 * Return: 1 if c is uppercase o, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
