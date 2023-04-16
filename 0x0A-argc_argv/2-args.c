#include "main.h"

/**
 * main - prints all the arguments each per line
 *
 * @argc: arg 1
 * @argv: arg 2
 *
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
