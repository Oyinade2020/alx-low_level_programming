#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %1d byte(s)\n", sizeof(c));
	printf("Size of an int: %1d byte(s)\n", sizeof(i));
	printf("Size of a long: %1d byte(s)\n", sizeof(li));
	printf("Size of a long long int: %1d byte(s)", sizeof(lli));
	printf("Size of a float: %1d byte(s)", sizeof(f));
	return (0);
}
