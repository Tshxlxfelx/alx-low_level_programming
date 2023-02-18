#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
int letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
}
putchar('\n');
return (0);
}

