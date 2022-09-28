#include "main.h"
/**
 * _esprimo - shows when a number is a prime number
 *
 * @n: int to check
 * @corre: int to check
 *
 * Return: 0 if it is not prime
 */
int _esprimo(int n, int corre)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (corre >= n / 2)
		return (1);
	if (n % corre == 0)
		return (0);
	else
		return (_esprimo(n, corre + 1));
	return (1);
}

/**
 * is_prime_number - function returns 1 if it is a prime number
 *
 * @n: to check
 *
 * Return: 0 if it is not a prime number
 */
int is_prime_number(int n)
{
	return (_esprimo(n, 2));
}
