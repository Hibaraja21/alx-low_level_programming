#include "3-calc.h"


/**
 * op_add - returns sum of two numbs
 *
 * @a: the first num
 * @b: the second int
 *
 * Return: sum of a and b
*/

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - substracts two numbers
 *
 * @a: the first num
 * @b: the second number
 *
 * Return: the difference of a and b
*/

int op_sub(int a, int b)
{
return (a - b);
}

/**
 *op_mul - multiplication of two numbers
 * @a: The first int
 * @b: The second int
 *
 * Return: multiplication of a and b
*/

int op_mul(int a, int b)
{
return (a * b);
}


/**
 * op_div - Returns the division of two numbers.
 * @a: the first int
 * @b: the second num
 *
 * Return: The quotient
*/

int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first numb
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
*/


int op_mod(int a, int b)
{
return (a % b);
}
