#include "main.h"

/**
 * _strcat - appends src string to dest string
 *
 * @src: source string
 * @dest: destination string
 *
 * Return: destination string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int srcSize = 0;
	int destSize = 0;

	for (i = 0; src[i] != '\0' ; i++)
		srcSize++;
	for (i = 0 ; dest[i] != '\0' ; i++)
		destSize++;
	for (i = 0 ; i <= srcSize ; i++)
		dest[destSize + i] = src[i];

	return (dest);
}
