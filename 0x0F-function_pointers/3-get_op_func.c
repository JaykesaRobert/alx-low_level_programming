#include "3-calc.h"

/**
 * get_op_func - select the correct function
 * @s: input arguments
 *
 * Return: func pointer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (*s == *(ops[i].op) && s[1] == '\0')
			return (ops[i].f);

		i++;
	}

	ERR_OUT;
	ERR_OPP;
}
