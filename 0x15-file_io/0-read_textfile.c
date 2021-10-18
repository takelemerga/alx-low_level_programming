#include "main.h"
/**
  * read_textfile - Reads a text file and prints it to POSIX stdout
  * @filename: The source file
  * @letters: Number of letters to reads and prints
  *
  * Return: If the function fails or filename is NULL - 0.
	* else - the actual number of bytes the function can read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, characters;

	char *buff;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	characters = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, characters);

	free(buff);
	close(fd);
	return (characters);
}
