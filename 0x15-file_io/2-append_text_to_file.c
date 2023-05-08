#include "main.h"

/**
 * append_text_to_file - Function appends text at the end of a file.
 * @filename: Parameter (the file to append to).
 * @text_content: Parameter (the text we need to append).
 * Return: 1 for success, -1 for error.
 */

int append_text_to_file(const char *filename, char *text_content)
{
        int check;

        if (!filename)
                return (1);
        check = open(filename, O_WRONLY | O_APPEND);
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
