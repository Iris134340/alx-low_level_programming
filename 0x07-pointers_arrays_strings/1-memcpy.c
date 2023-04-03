#include "main.h"

/**
 * _memcpy - copies n bytes from a block of memory to another
 *
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (dest != NULL && src != NULL)
	{
		for (i = 0 ; i < n ; i++)
			dest[i] = src[i];
	}
	return (dest);
}
