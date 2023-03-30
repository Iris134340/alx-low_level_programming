#include "main.h"

/**
 * _strncpy: copies n bytes of a string to another string
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;
	int destS = 0;
	int srcS = 0;

	for (j = 0 ; dest[j] != '\0' ; j++)
		destS++;
	for (j = 0 ; src[j] != '\0' ; j++)
		srcS++;

	if (n < srcS)
	{
		for (j = 0 ; j < n ; j++)
			dest[j] = src[j];
	}
	else if (n >= srcS)
	{
		for (j = 0 ; j < n ; j++)
			dest[j] = src[j];
		for (j = 0 ; j < n - srcS ; j++)
			dest[j] = '\0';
	}
	return (dest);
}
