#include "main.h"

/**
 * read_textfile - reads a textfile and prints it to the standard output
 * @filename: filename
 * @letters: number of letter to read and print
 * Return: number of letters it reads and prints. Zero when it fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd
ssize_t nrd, nwr;
char *buff;
if (!filename)
	return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
	return (0);
buf = malloc(sizeof(char) * (letters));
if (!buf)
	return (0);
nrd = read(fd, buf, letters);
nwd = write(STDOUT_FILENO, buf, nrd);
close(fd);
free(buf);
return (nwr);
}
