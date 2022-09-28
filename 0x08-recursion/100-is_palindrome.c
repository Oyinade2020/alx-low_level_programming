#include "main.h"
/**
 * _comparacadena - compares two strings
 *
 * @s: first part of string
 * @p: last part of string
 * Return: 0 if not, 1 if equal
 */
int _comparacadena(char *s, char *p)
{
	if (*s == '\0')
		return (1);
	if (*s == *p)
		return (_comparacadena(++s, --p));
	else
		return (0);
}
/**
 * _ultima - this reverses the string to see if it is the same
 *
 * @s: char pointer to check
 *
 * Return: return to pointer in reverse
 */
char *_ultima(char *s)
{
	if (*s != '\0')
		return (_ultima(++s));
	else
		return (--s);
}
/**
 * is_palindrome - the given function returning extra functions
 * _ultima - this will reverse the string
 *
 * @s: char pointer to check
 *
 * Return: 1 if it is palindrome, 0 if it is not
 */
int is_palindrome(char *s)
{
	char *p;

	p = _ultima(s);
	return (_comparacadena(s, p));
}
