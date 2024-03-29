#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: upointer to a string of 0 to 1 chars
 *
 * Return: number, or 0 if there is one or more chars in the string
 * b is  not 0 or 1 or if b is null
 */

unsigned int binary_to_uint(const char *b)

{
	unsigned int result = 0;

	if (b == NULL)
	return (0);

	while (*b != '\0')
{
	if (*b != '0' && *b != '1')
	return (0);
	result = (result * 2) + (*b - '0');
	b++;

}
return (result);
}
