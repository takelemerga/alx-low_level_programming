#include <stdio.h>
#include <stdlib.h>
#include <udis86.h>

/**
 * main - print opcodes of its own main function
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: 0 if no errors
 */
int main(int argc, char *argv[])
{
	ud_t ud_obj;

	int num = 0, i = 0;

	if (argc != 2)
	{
		printf("Error\n";)
		exit(1);
	}

	if (argc == 2)
	{
		num = atoi(argv[1]);

		if (num < 0)
		{
			printf("Error\n");
			exit(2);
		}

		ud_unit(&ud_obj);
		ud_set_input_buffer(&ud_obj, argv[1], num);
		ud_set_mode(&ud_obj, 64);
		ud_set_syntax(&ud_obj, UD_SYN_INTEL);

		while (ud_disassemble(&ud_obj))
		{
			printf("\t%s\n", ud_insn_hex(&ud_obj));
		}
	}

	return (0);
}
