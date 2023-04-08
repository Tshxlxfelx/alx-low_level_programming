#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to get the bit from.
 * @index: index of a bit to get
 *
 * Return: value of a bit index or -1 if unsuccessful
 */
int get_bit(unsigned long int n, unsigned int index)

{
	if (index >= (sizeof(unsigned long int) * 8))
	return (-1);
	return ((n >> index) & 1);
}
