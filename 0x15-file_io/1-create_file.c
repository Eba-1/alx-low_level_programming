#include "main.h"
#include "string.h"

/**
 * create_file - Function that creates a file.
 * @filename: Parameter (the name of the file to create).
 * @text_content: Parameter (the string to write to the file).
 * Return: 1 for success, -1 for failure.
 */

int create_file(const char *filename, char *text_content)
{
	int check;

	if (!filename)
		return (1);
	check = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (check == -1)
		return (-1);
	if (text_content)
	{
		if (write(check, text_content, strlen(text_content)) == -1)
		{
			close(check);
			return (-1);
		}
	}
	close(check);
	return (1);
}
