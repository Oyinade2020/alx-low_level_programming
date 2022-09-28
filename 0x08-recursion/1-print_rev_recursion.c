#include "main.h"
/**
 * strlen_recursion - returns the length of a string
 *
 * @s: pointer to char to check
 *
 * Return: 0 is success
 */
int strlen_recursion(char *s)
{
	int c;

	if (*S == '\0')
	{
		return (0);
	}
	else
	{
		c = _strlen_recursion(s + 1);
	}
	return (c + 1);
}
