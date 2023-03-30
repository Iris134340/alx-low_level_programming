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
	int destSz = 0;
	int srcSz = 0;

	for (i = 0 ; src[i] != '\0' ; i++)
		srcSz++;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destSz++;

	for (i = 0 ; i < n ; i++)
	{
		if (n < srcSz)
			dest[destSz + i] = src[i];
		else if (n >= srcSz)
		{
			dest[destSz + i] = src[i];
			dest[destSz + i] = '\0';
		}
	}


	return (dest);
}
