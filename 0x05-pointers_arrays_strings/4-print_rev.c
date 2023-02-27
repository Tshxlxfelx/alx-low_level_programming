#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed in reverse
 */
void print_rev(char *s)
{
int length = 0;
int i;

// Find the length of the string
while (s[length] != '\0')
{
length++;
}

// Print the string in reverse order
for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}

// Print a newline character at the end
_putchar('\n');
}

