#include "main.h"

/**
 * main- function to print a,b,c
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	for(c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	putchar('\n');

	return (0);
}
