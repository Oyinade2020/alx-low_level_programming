#include "main.h"
/**
 * main- Entry point
 *
 * Return: 0
 *
 * Description: "print_alphabet_x10.c: function to print abc 10 times"
 *
 */
void print_alphabet_x10(void)
{
	char c, i;
	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
