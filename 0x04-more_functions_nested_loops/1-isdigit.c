#include "main.h"

/**
 * _isdigit - checks if c is a digit (1-9)
 *
 * @c: the input that will be checked
 *
 * Return: 1 if a digit 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
