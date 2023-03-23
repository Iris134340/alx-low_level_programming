#include "main.h"

/**
 * _islower - checks for a lower case char
 *
 * @c: is the variable that will be checked
 *
 * Return: 1 if 'c' is lowercase otherwise
 * 0 (Success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
