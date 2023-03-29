#include "main.h"

/**
 * _strcpy - copies a string to another
 *
 * @src: the array we'll copy from
 * @dest: the array we'll copy to
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
