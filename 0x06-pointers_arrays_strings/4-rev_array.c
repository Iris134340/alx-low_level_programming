#include "main.h"

/**
 * reverse_array - reverses the values of an array
 *
 * @a: array to be reversed
 * @n: number of elements of the array
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, var, j;

	for (i = 0, j = n - 1 ; i < j ; i++, j--)
	{
		var = a[i];
		a[i] = a[j];
		a[j] = var;
	}
}
