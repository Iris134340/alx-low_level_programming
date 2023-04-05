#include "main.h"

/**
 * _strstr - finds the 1st occurence of substring needle in haystack
 *
 * @needle: substring to compare against
 * @haystack: string to search for substring
 *
 * Return: Null if not found or a pointer to the beginning
 * of the located substring in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0 ; haystack[i] != '\0' ; i++)
	{
		for (j = 0 ; needle[j] != '\0' ; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
