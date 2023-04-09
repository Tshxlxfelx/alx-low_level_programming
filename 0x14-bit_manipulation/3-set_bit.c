#include "main.h"

/**
 * set_bit - set bit of a given index to 1
 * @n: pointer to unusigned long int to modify
 * @index: index of a bit to set
 *
 * Return: 1 sucessful, -1 unsuccessful
 */

int set_bit(unsigned long int *n, unsigned int index)

{
if (index >= sizeof(unsigned long int) * 8)
	return (-1);
*n |= (1 << index);
	return (1);
}

