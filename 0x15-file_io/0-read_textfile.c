#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads the textfile,  post it to the posix standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: w - number of letters to read and print or 0 for error or NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
char *buf;
ssize_t fd;
ssize_t w;
ssize_t t;

fd = open(filename, O_RDONLY);
if (fd == -1)
	return (0);

buf = malloc(sizeof(char) * letters);
t = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, t);

free(buf);
close(fd);
return (w);
}
