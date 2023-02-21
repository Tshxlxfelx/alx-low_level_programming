#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
char c;
for (int i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
}
}

