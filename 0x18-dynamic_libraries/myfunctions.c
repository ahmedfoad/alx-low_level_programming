#include "main.h"

/**
 * add - Adds two integers
 *
 * This function takes two integers, `a` and `b`, and returns their sum.
 *
 * @a: The first integer to add.
 * @b: The second integer to add.
 *
 * Return: The sum of `a` and `b`.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers
 *
 * This function takes two integers, `a` and `b`, and returns their difference.
 *
 * @a: The integer to subtract from.
 * @b: The integer to subtract.
 *
 * Return: The difference between `a` and `b`.
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers
 *
 * This function takes two integers, `a` and `b`, and returns their product.
 *
 * @a: The first integer to multiply.
 * @b: The second integer to multiply.
 *
 * Return: The product of `a` and `b`.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two integers
 *
 * This function takes two integers, `a` and `b`, and returns their quotient.
 * If `b` is zero, this function returns zero.
 *
 * @a: The integer to divide.
 * @b: The integer to divide by.
 *
 * Return: The quotient of `a` and `b`.
 */
int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	return (0);
}

/**
 * mod - Computes the modulus of two integers
 *
 * This function takes two integers, `a` and `b`, and returns the modulus
 * of `a` and `b`. If `b` is zero, this function returns zero.
 *
 * @a: The integer to compute the modulus of.
 * @b: The modulus to compute.
 *
 * Return: The modulus of `a` and `b`.
 */
int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	return (0);
}

