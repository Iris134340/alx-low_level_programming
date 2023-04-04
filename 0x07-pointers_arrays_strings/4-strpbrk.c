#include "main.h"

/**
 * _strpbrk - locates the firt occurence in s from accept
 *
 * @s: string to be checked
 * @accept: string to be compared against
 *
 * Return: pointer to the byte in s or NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
