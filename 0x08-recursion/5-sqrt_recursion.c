#include "main.h"
/**
 * _alcuadrado - gives the square root of a number
 *
 * @n: given number
 * @corre: from 0 up looking for square always less than half the number
 * Return: if it does not have square or corre it finds it
 */
int _alcuadrado(int n, int corre)
{
	if (corre < 0)
		return (-1);
	if (corre == 1)
		return (1);
	if (n > corre / 2)
		return (-1);
	if (corre != n * n)
		return (_alcuadrado(corre, n + 1));
	if (corre == n * n)
		return (n);
	return (-1);
}
/**
 * _sqrt_recursion - returns the square root of a natural number
 *
 * @n: to check
 *
 * Return: the square root or -1 if there is not any
 */
int _sqrt_recursion(int n)
{
	return (_alcuadrado(n, 1));
}
