#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array element on a newl
 * @array: array
 * @size: how many element to print
 * @action: pointer to print in regular 
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
