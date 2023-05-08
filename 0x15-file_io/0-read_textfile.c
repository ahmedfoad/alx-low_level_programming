/*
 * File: 0-read_textfile.c
 * Auth: Dr Marcus.
 */
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: string filename.
 * @letters: no# of letters to read.
 *
 * Return: when function get an exception
 * or filename is NULL - 0.
 * open and write the actual number of bytes
 * the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, rd, wrt;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	opn = open(filename, O_RDONLY);
	rd = read(opn, buffer, letters);
	wrt = write(STDOUT_FILENO, buffer, rd);
	if (opn == -1 || rd == -1 || wrt == -1 || wrt != rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(opn);
	return (wrt);
}
