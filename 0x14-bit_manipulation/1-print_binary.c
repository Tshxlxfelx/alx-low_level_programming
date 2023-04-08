#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 *
 * @n: The number to be printed in binary.
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	unsigned long int size = sizeof(unsigned long int) * 8;
	int flag = 0;

	if (n == 0)
{
		_putchar('0');
		return;
}

	while (size--)
{
		if ((n >> size) & 1)
{
			flag = 1;
			_putchar('1');
}
		else if (flag)
			_putchar('0');
		mask <<= 1;
}
}

