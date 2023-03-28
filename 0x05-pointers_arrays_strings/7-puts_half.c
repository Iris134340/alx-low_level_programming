#include "main.h"
/**
 * puts_half - prints the second half of a string
 *
 * @str: string affected by the function
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int i;
	int size = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		size++;
	}
	if (size % 2 == 0)
	{
		for (i = size / 2 ; i < size ; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = ((size - 1) / 2 + 1) ; i < size ; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
