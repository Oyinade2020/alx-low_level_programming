#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always 0 (success)
 *
 * Description: prints single digit numbers
 */
int main(void)
{
	char n;

	for (n = '0'; n<= '9'; n++)
	{
	putchar(n);
	}
	putchar('\n');
	return (0);
}	
