#include "main.h"

/**
* _strlen - check the length of the string
* Return: length of the string
* @s: string
*/

int _strlen(const char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0'; i++)
	{
	}

	return (i);
}

/**
 * append_text_to_file - add taxt to the end
 * @filename: filename
 * @text_content: text content
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fo;
	int testwrite;
	unsigned long int sizetext = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	if (access(filename, F_OK) == 0)
	{
		fo = open(filename, O_WRONLY | O_APPEND);
		if (fo == -1)
			return (-1);

		if (text_content == NULL)
			return (1);

		testwrite = write(fo, text_content, sizetext);

		if (testwrite == -1)
			return (-1);
	}

	else
	{
		return (-1);
	}

	close(fo);

	return (1);
}
