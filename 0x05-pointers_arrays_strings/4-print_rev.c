#include "main.h"

/**
 * print_rev - prints a string of characters in reverse
 *
 * @s: the string of characters
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int i;
	int size_arr = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		size_arr++;
	}

	for (i = size_arr; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
