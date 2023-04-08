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
int main(int argc, char **argv)
{
	int number1, number2, result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);
	result = number1 * number2;

	printf("%d\n", result);
	return (0);
}
