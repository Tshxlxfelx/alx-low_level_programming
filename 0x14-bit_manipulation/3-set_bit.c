#include "main.h"

/**
 * set_bit - set a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: set bit to 1
 *
 * Return: 1 successful, -1 unsuccessful
 */

int set_bit(unsigned long int *n, unsigned int index);

{
if (index >= sizeof(unsigned long int) * 8)
{
	return (-1);
}
*n |= (1ul << index);
	return (1);
}

