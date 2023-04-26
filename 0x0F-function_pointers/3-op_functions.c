#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * op_add - adding a plus b
  * @a: variable a
  * @b: variable b
  *
  * Return: a + b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtract a minus b
  * @a: variable a
  * @b: variable b
  *
  * Return: a - b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multipli a times b
  * @a: variable a
  * @b: variable b
  *
  * Return: a * b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divide a by b
  * @a: variable a
  * @b: variable b
  *
  * Return: a / b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  * op_mod - get the reminder of a by b
  * @a: variable a
  * @b: variable b
  *
  * Return: a % b
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
