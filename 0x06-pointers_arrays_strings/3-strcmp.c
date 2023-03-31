#include "main.h"

/**
 * _strcmp - compares 2 strings and their values
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 if strings are smilar, another integer if not
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int count = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		count = (s1[i] - s2[i]);

		if (count != 0)
		{
			return (count);
		}
		i++;
	}
	return (0);
}
