#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n);

{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int bit = 0;

	while (mask > 0)
{
	bit = (n & mask) ? 1 : 0;
	putchar(bit + '0');
	mask >>= 1;
}
}
