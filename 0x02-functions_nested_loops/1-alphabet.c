#include "main.h"

/**
 * main- Entry point
 *
 * Return: 0
 *
 * Description: function prints out lowercase alphabets
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

}
