#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - function that sum of a and b
 *
 * @a: int
 * @b: int
 *
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that difference of a and b
 *
 * @a: int
 * @b: int
 *
 * Return: a-b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplication of a and b
 *
 * @a: int
 * @b: int
 *
 * Return: a*b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that division of a and b
 *
 * @a: int
 * @b: int
 *
 * Return: int
 */

int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);

	return (0);
}

/**
 * op_mod - function that multiplication of a and b
 *
 * @a: int
 * @b: int
 *
 * Return: int
 */

int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);

	return (0);
}
