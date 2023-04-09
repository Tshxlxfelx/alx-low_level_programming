#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets vaulue of bit to 0 at a given index
 * @n: pointer of va number
 * @index: index,starting from 0 of bit to set
 * Return 1 if it worked, or -1 if unsuccessful
 */
int clear_bit(unsigned long int *n, unsigned int index)

{

if (index >= (sizeof(unsigned long int) * 8))
	return (-1);
*n &= ~(1 << index);
	return (1);

}
