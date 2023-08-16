#include "main.h"


	/**
	 * main - Entry point
	 * checks for alphabetic character
	 * Return: Always (0)
	 */
	int _isalpha(int c)
	{
		return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
	}
