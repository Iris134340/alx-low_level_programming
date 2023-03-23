#include "main.h"

/**
 * print_alphabet - prints the alphabet a to z
 *
 * Return: 0 (Success)
*/

void print_alphabet(void)
{
	int k;

	for (k = 'a'; k <= 'z'; k++)
		_putchar(k);
	_putchar('\n');
}
