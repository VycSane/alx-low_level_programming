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

	(s[0] == (ops[i].op)[0]) ? (return (ops[i].f)) : (return (NULL);
	i++;
	return (get_op_func(s));
}
