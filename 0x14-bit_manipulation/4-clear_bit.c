#include "main.h"


/**
* clear_bit - sets bit at position to 0(Entry point ).
*
* @n: num to be used.
*
* @index: Position to be cleared.
*
* Return: 1 on (ssuccess), -1 on (fail).
*/


int clear_bit(unsigned long int *n, unsigned int index)
{
if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
	return (-1);

*n &= ~(1 << index);
return (1);
}
