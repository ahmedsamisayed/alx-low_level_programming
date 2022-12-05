#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to add to the file
 *
 * Return: If filename = null or function fails or
 * file does not exist or
 * user do not have the required permissions to write the file
 * (-1)
 * else (on success) (1).,
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, l);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
