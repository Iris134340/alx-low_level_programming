#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print digis with putchar
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int dg = 0;

	while (dg <= 9)
	{
		putchar('0' + dg);
		dg++;
	}
	putchar('\n');
	return (0);
}
