#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints.
 * @filename: Name of the file.
 * @letters: Parameter (the number of letters it should read and print).
 * Return: 0 for error, number of letters it coud read and print for success.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t chars;
	int file_pointer;
	char *string;

	if (!filename)
	{
		return (0);
	}
	string = malloc(sizeof(char) * letters + 1);
	if (string == NULL)
		return (0);
	file_pointer = open(filename, O_RDONLY);
	if (file_pointer == -1)
	{
		free(string);
		return (0);
	}
	chars = read(file_pointer, string, sizeof(char) * letters);
	if (chars == -1)
	{
		free(string);
		close(file_pointer);
		return (0);
	}
	chars = write(STDOUT_FILENO, string, chars);
	if (chars == -1)
        {
                free(string);
                close(file_pointer);
                return (0);
        }
	free(string);
	close(file_pointer);
	return (chars);
}
