#include <stdio.h>
#include <stdlib.h>
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
	int result, i;
	char *ptr;
	long arg;

	result = 0;
	if (argc == 1)
	{
		printf("%d\n", result);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		arg = strtol(argv[i], &ptr, 10);
		if (*ptr)
		{
			printf("Error\n");
			return (1);
		}

		result += (int)arg;
	}

	printf("%d\n", result);
	return (0);
}
