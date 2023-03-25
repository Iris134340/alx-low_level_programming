#include "main.h"

/**
 * _isupper - check if c is upper
 *
 * @c: the variable that will be checked
 *
 * Return: 1 is upper 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
