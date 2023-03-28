#include "main.h"

/**
 * print_array - prints the elements of the array
 *
 * @a: the table that holds the elements
 * @n: number of elements of array
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; a[i] < a[n] ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
}
