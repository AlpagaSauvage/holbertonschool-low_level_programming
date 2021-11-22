#include "main.h"

/**
 * read_textfile - read file
 * @filename: filemane
 * @letters: letters
 * Return: testread
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fo;
	char *buffer;
	int testread;


	fo = open(filename, O_RDONLY);

	if (fo == -1)
		return (0);

	if (*filename == -1)
		return (0);

	buffer = malloc(letters * (sizeof(char)));

	if (buffer == NULL)
		return (0);


	testread = read(fo, buffer, letters);

	if (testread == -1)
		return (0);

	close(fo);

	testread = write(1, buffer, testread);

	if (testread == -1)
		return (0);

	free(buffer);

	return (testread);
}
