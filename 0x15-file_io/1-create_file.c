#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - creates a file with a fiven name
 * and writes given text to it
 * @filename: name of the file to create
 * @text_content: a NULL-terminated string to write the file
 *
 * Return: 1 success, -1 failure
 */

int create_file(const char *filename, char *text_content);

{
int fd, res, len
if (!filename)
return (-1);

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd < 0)
return (-1);

if (!text_content)
text_content = "";

for (len = 0; text_content[len]; len++);
res = write(fd, text_content, len);
if (res < 0)

{
close(fd);
return (-1);
}
close(fd);
return (1);
}
