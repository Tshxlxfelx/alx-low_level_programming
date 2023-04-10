#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads the textfile,  post it to the posix standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: number of letters to read and print or 0 for error
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
int fd, num_read, num_written, total_written;
char buf[BUFSIZ];

if (filename == NULL)
return (0)

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

total_written = 0;
while (letters > 0 && (num_read = read(fd, buf, BUFSIZ)) > 0)

{
if (num_read > letters)
numb_read = letters;

num_written = write(STDOUT_FILENO, buf, num_read);
if (num_written == -1 || num_written != num_read)

{
close(fd);
return (0);
}
letters -= num_read;
total_written += num_written;
}
close(fd);

if (num_read == -1)
return (0);

return (total_written);
}
