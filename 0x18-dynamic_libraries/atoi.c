#include "main.h"
#include <stdio.h>
/**
 * _atoi - Converts a string to an integer.
 *
 * @s: The string
 * to convert.
 *
 * Return: The integer
 * value of the string.
 */
int _atoi(char *s)
{
	unsigned int counter = 0, var1, var2, var3, sum = 0, temp;
	int aux2 = 1;

	while (*(s + counter) != '\0')
	{
		counter++;
	}
	for (var1 = 0; var1 < counter; var1++)
	{
		if (*(s + var1) >= '0' && *(s + var1) <= '9')
			break;
	}
	for (var2 = var1; var2 < counter; var2++)
	{
		if (!(*(s + var2) >= '0' && *(s + var2) <= '9'))
			break;
	}
	for (var3 = 0; var3 < var1; var3++)
	{
		if (*(s + var3) == '-')
			aux2 = aux2 * (-1);
	}
	temp = var2 - var1;
	while (temp >= 1)
	{
		sum = (sum * 10) + (*(s + var1) - '0');
		var1++;
		temp--;
	}
	sum = sum * aux2;
	return (sum);
}
