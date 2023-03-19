#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: alphabet except e and q
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
			c++;
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
