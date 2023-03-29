#include "main.h"

/**
 * _strncat - appends n bytes from src string to dest string
 *
 * @src: source string
 * @dest: destination string
 * @n: bytes to be appended
 *
 * Return: destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destSize = 0;
	int srcSize = 0;

	for (i = 0 ; src[i] != '\0' ; i++)
		srcSize++;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destSize++;

	for (i = 0 ; i < n ; i++)
	{
		if (n < destSize)
			dest[destSize + i] = src[i];
		else if (n >= destSize)
		{
			dest[destSize + i] = src[i];
			dest[destSize + i] = '\0';
		}
	}


	return (dest);
}
