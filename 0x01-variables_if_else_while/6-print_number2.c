#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: Always 0 (success)
 *
 * Description: prints numbers 0 to 9
 */

int main(void)
{
	int n;
	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
