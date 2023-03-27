#include "main.h"

/**
 * _strlen - returns the lenght of a string of char
 *
 * @s: string of char
 *
 * Return: the lenght of the srting
 */

int _strlen(char *s)
{
	int i;
	int sum_char = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		sum_char++;
	}
	return (sum_char);
}
