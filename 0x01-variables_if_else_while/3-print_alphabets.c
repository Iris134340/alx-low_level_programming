#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabets
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char c = 'a';
	char k = 'A';

	while (c <= 'z')
	{
		putchar (c);
		c++;
	}
	while (k <= 'Z')
	{
		putchar(k);
		k++;
	}
	putchar('\n');
	return (0);
}
