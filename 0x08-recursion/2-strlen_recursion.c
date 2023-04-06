#include "main.h"

/**
 * _strlen_recursion - recursion that returns lenght of a string
 *
 * @s: the string
 *
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
		return (0);
	}
	length = _strlen_recursion(s + 1) + 1;
	return (length);
}
