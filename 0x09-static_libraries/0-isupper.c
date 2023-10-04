#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the char to check
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	int i;

	if (c >= 'A' && c <= 'Z')
	{
		i = 1;
		return (i);
	}
	else
	{
		i = 0;
		return (i);
	}
}