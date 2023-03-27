#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: int 1
 * @b: int 2
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int var;

	var = *a;
	*a = *b;
	*b = var;
}
