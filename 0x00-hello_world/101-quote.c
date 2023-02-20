#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1
 */
int main(void)
{
const char
*str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t len = 0;

while (str[len] != '\0')
{
len++;
}

write(2, str, len);

return (1);
}

