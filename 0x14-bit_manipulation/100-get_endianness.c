#include "main.h"


/**
 *    get_endianness - Entry point
 *
 * Return:( 1 if little endian, 0 otherwise)
 */

int get_endianness(void)
{
	unsigned int h = 1;
	char *en = (char *)&h;

	if (*en)
		return (1);
	return (0);

}
