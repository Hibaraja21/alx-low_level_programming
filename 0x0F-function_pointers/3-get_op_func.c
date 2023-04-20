#include "3-calc.h"
#include <stdlib.h>


/**
 *get_op_func - selects the correct function to perform
 *                             the operation asked by the user
 *
 * @s:string operator
 *
 * Return: a pointer to the function corresponding to
 *                             the operator given in parameter
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
int b = 0;

while (b < 5)
{
	if (s && s[0] == ops[b].op[0] && !s[1])
		return (ops[b].f);
	b++;
}
return (NULL);
}
