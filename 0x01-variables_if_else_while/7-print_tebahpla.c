#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always return 0 (success)
 *
 * Description: prints lowercase in reverse
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
