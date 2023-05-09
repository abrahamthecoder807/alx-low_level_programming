#include "main.h"

/**
 * read_textfile - A function that reads and print a textfile to the POSIX
 * @filename: The file to work with
 * @letters: the number of letters
 * Return: the actual number of letters it could read and print or return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, rd, wr;
	char *temp;

	temp = malloc(letters);
	if (temp == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(temp);
		return (0);
	}
	rd = read(file, temp, letters);
	wr = write(STDOUT_FILENO, temp, rd);

	close(file);

	return (wr);
}
