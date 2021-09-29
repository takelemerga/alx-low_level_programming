#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func -  selects the correct function to
 * perform the operation asked by the user
 * @s: input string
 * Return: pointer to a function
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};

	int k = 0;

	for (; k < 5; k++)
	{
		if (strcmp(s, ops[k].op) == 0)
			return (ops[k].f);
	}
	return (NULL);
}
