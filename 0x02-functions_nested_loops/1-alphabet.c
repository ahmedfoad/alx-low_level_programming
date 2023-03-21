#include "main.h"

/**
 * Print_alphabet -  prints all characters from a to z
 * Return: void
  */
void print_alphabet (void) {
	char x;
	for(x = 'a'; x <= 'z'; x++)
	{
		_putchar("%c", x);
	}
	_putchar('\n');
}
