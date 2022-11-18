#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the add
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the diffrence btween 2 numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the sub
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the multiply of 2 numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the multiply
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -returns the division of 2 numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the reminder of the division of 2 numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: reminder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
