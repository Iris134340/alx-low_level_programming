#include "main.h"
/**
 * _strchr - finds the first occurence of c in a string
 *
 * @s: string
 * @c: charachter to find
 *
 * Return: NULL if c not found or a pointer to first occurence
 * of c if found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
