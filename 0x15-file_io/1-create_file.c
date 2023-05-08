#include "main.h"
/**
 * create_file -a funcion to create a file and set a premission..
 *
 * @text_content: set as NULL terminated string to write to the file
 * @filename: The filename that we needs
 * to create on our folder..
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int opn, wrt, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		while (text_content[len])
			len++;

	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(opn, text_content, len);

	if (opn == -1 || wrt == -1)
		return (-1);

	close(opn);

	return (1);
}

