#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if no errors
 */

int main(int argc, char *argv[])
{
	int (*fun_prt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	fun_prt = get_op_func(argv[2]);

	if (!fun_prt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", fun_prt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
