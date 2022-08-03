#include <stdlib.h>
#include <stddef.h>
#include "3-calc.h"
/**
 * get_op_func - selects the right function based on the operator.
 * @s: the operator
 *
 * Return: a pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
