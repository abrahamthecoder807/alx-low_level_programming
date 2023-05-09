#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0, file;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	while (text_content[fd] != '\0')
	{
		fd++;
	}
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
	{
		return (-1);
	}
	write(file, text_content, fd);
	return (1);
}
