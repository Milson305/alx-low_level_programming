#include "main.h"
/**
 * _memset - fills memory with a constant byte,
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *tmp = s;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	s = tmp;
	return (s);
}