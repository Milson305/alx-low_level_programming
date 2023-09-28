#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: On Success 1
 *On error, -1 is returned, and errno is set appropriately.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
