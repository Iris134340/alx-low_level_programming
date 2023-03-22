#include "main.h"

/**
 * main -Entry point
 *
 * Descripton: prints putchar
 *
 * Return: 0 success
*/

int main(void)
{
	char str[] = "_putchar";
	int k;

	for (k = 0; k < 8; k++)
		_putchar(str[k]);
	_putchar('\n');

	return (0);

}
