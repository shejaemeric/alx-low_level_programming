#include "3-calc.h"

/**
 * op_add - add 2 variavles
 *
 * @a: first operand
 * @b: second operand
 * Return: operation result as integer
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract 2 variables
 *
 * @a: first operand
 * @b: second operand
 * Return: operation result as integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply 2 variables
 *
 * @a: first operand
 * @b: second operand
 * Return: operation result as integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide 2 variables
 *
 * @a: first operand
 * @b: second operand
 * Return: operation result as integer
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod -  find the remeinder
 *
 * @a: first operand
 * @b: second operand
 * Return: operation result as integer
 */
int op_mod(int a, int b)
{
	return (a % b);
}
