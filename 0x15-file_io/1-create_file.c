#include "main.h"

/**
 * create_file - create file if doen't exist
 * @filename: filename
 * @text_content: text content
 * Return: 1
 */

int create_file(const char *filename, char *text_content)
{
	int fo;
	int testwrite;
	unsigned long int sizetext = strlen(text_content);

	if (filename == NULL)
		return (-1);

	fo = open(filename, O_WRONLY | O_CREAT);

	chmod(filename, 00600);

	if (fo == -1)
		return (0);

	if (text_content != NULL)
	{
		testwrite = write(fo, text_content, sizetext);

		if (testwrite == -1)
			return (-1);
	}

	close(fo);

	return (1);
}
