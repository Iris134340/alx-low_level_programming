#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print single digits
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int dg = 0;

	while (dg < 10)
	{
		printf("%d", dg);
		dg++;
	}
	putchar('\n');
	return (0);
}
