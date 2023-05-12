#include "main.h"
/**
 * read_textfile - reads text from file, print it - STDOUT -.
 * @filename: name file being read
 * @letters: number of bytes to be read
 * Return: w number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t w;
ssize_t t;
if (!filename || !letters)
return (0);

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
