#include "3-calc.h"

/**
 * get_op_func - points to the operation
 * @s: pointer to argv
 * Return: Null if it fails, otherwise the correct
 * operation
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
	int i = 5;

	while (i--)
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);

	return (NULL);
}
