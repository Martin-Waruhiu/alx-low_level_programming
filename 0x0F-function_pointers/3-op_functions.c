#include "3-calc.h"


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - func to sum
 * @a: the fisrt num
 * @b: second num
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - func to subtract
 * @a: num1
 * @b:num2
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function to multiply
 * @a: num1
 * @b: num2
 * Return: theresult
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - func to divide
 * @a: num1
 * @b: num2
 * Return: result
 */

int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulus func
 * @a: num1
 * @b: num2
 * Return: result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
