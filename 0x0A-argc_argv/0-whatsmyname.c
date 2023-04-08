#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - Check the code
 *
 * @argc: contains the number of arguments passed to the program
 * @argv: a one-dimensional array of strings.
 * Each string is one of the arguments that was passed to the program
 * Return: Alway 0.
 */
int main(int argc, char * argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
