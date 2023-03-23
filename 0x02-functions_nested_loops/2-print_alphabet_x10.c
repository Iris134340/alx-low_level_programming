#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: 0 (Success)
*/

void print_alphabet_x10(void)
{
	int time, k;

	for (time = 0; time < 10; time++)
	{
		for (k = 'a'; k <= 'z'; k++)
			_putchar(k);
		_putchar('\n');
	}
}
