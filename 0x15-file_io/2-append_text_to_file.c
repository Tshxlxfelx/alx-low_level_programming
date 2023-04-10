#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * append_text_to_file - append text to end of file
 * @filename: name of file
 * @text_content: text to file
 *
 * Return: 1 success, -1 failure
 */

int append_text_to_file(const char *filename, char *text_content);

{
int fd, len = 0, wrlen;

if (filename == NULL)
	return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
	return (-1);

if (text_content != NULL)

{
while  (text_content[len])
	len++;

wrlen = write(fd, text_content, len);
if (wrlen != len)
{
close(fd);
return (-1);
}
}
close(fd);
return (-1);
}
