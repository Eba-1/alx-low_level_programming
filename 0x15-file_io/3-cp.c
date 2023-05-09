#include "main.h"

/**
 * custom_close - Function that closes file to avoid redundancy.
 * @file: Parameter (the file descriptor).
 * Return: void.
 */

void custom_close(int file)
{
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", file);
		exit(100);
	}
}

/**
 * main - Entry point.
 * @argc: Parameter (the number of arguments).
 * @argv: Parameter (argument vector).
 * Return: 0
 */

int main(int argc, char **argv)
{
	int src, dest, letter, letter_w;
	char str[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((letter = read(src, str, 1024)) > 0)
	{
		letter_w = write(dest, str, letter);
		if (letter_w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (letter == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	custom_close(src);
	custom_close(dest);
	return (0);
}
