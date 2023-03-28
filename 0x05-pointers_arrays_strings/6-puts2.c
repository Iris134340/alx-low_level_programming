#include "main.h"

/**
 * puts2 - prints every other element of a string
 *
 * @str: string of elements
 *
 * Return: 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
