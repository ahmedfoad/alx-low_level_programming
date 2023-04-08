#include <stdio.h>

/**
 * main - Check the code
 *
 * @argc: contains the number of arguments passed to the program
 * @argv: a one-dimensional array of strings.
 * Each string is one of the arguments that was passed to the program
 * Return: Alway 0.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
