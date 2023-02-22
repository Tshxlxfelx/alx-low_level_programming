#include "main.h"

/**
 * Jack_bauer
 * Prints every minute of the day of Jack Bauer, from 00:00 to 23:59
 */
int void jack_bauer(void)
{
int h1, h2, m1, m2;

for (h1 = '0'; h1 <= '2'; h1++)
{
for (h2 = '0'; h2 <= '9'; h2++)
{
if (h1 == '2' && h2 == '4')
break;
for (m1 = '0'; m1 <= '5'; m1++)
{
for (m2 = '0'; m2 <= '9'; m2++)
{
_putchar(h1);
_putchar(h2);
_putchar(':');
_putchar(m1);
_putchar(m2);
_putchar('\n');
}
}
}
}
}

