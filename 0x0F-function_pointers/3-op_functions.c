#include "3-calc.h"


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - print sum of two numbers
 * @a: first number
 * @b: second number
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - print difference  of two numbers
 * @a: first number
 * @b: second number
 * Return: difference
 */

int op_sub(int a, int b)
{
        return (a - b);
}

/**
 * op_mul - print product of two numbers
 * @a: first number
 * @b: second number
 * Return: product
 */

int op_mul(int a, int b)
{
        return (a * b);
}

/**
 * op_div - print division of two numbers
 * @a: first number
 * @b: second number
 * Return: division
 */

int op_div(int a, int b)
{
        return (a / b);
}

/**
 * op_mod - print remainder of two numbers
 * @a: first number
 * @b: second number
 * Return: remainder
 */

int op_mod(int a, int b)
{
        return (a % b);
}
