#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
    unsigned int i = 1;
    char *c = (char *) &i;

    return (*c != 0); // Return 1 if the value at c is not zero (little endian), otherwise return 0 (big endian)
}

