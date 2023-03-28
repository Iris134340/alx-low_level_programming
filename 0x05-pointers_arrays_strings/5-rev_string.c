#include "main.h"

/**
 * rev_string - revers a string
 *
 * @s: string of characters
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int i, var, j;
	int size_arr = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		size_arr++;
	}

	for (i = 0, j = size_arr - 1 ; i < j ; i++, j--)
	{
		var = s[i];
		s[i] = s[j];
		s[j] = var;
	}
}
