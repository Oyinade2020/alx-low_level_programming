#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 *
 * @s: a pointer given by main
 * @c: the char to look for
 *
 * Description: returns the first occurence of the char in the string
 * Return: returns a pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (c == 0)
		return (s + i);
	return(0);
}
