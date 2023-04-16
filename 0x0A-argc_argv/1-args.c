#include "main.h"

/**
 * main - prints number of arguments passedinto the program
 *
 * @argc: argument 1
 * @argv: argument 2
 *
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

