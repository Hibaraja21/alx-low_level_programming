#include "main.h"


/**
* flip_bits - entry point: (gets the num of bits to flip to get from n to m)
*
* @n: initial numb.
*
* @m: final num.
*
* Return: the number of flipped bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int fl = n ^ m;
	int counterr = 0;

	while (fl)
	{
		if (fl & 1)
			counterr++;
		fl >>= 1;
	}
	return (counterr);
}
