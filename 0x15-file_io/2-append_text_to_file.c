#include "file.h"

/**
 * append_text_to_file - append text to file
 * @filename: -
 * @text_content: -
 * Return: Success ? 1 : -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, _write;

	file_desc = open(filename, O_WRONLY | O_APPEND);
	if (file_desc == -1)
		return (-1);

	if (!text_content)
	{
		close(file_desc);
		return (1);
	}

	_write = write(file_desc, text_content, slen(text_content));
	if (_write == -1 || _write != slen(text_content))
	{
		close(file_desc);
		return (-1);
	}

	close(file_desc);
	return (1);
}

