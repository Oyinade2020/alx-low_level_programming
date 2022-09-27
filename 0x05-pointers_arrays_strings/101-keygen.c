#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: generated password
 */
int main(void)
{
	int i = 0, random, checksum;

	srand(time(NULL));
	checksum = 2772;
	while (checksum > 122)
	{
		random = (rand() % 100);
		printf("%c", random);
		checksum -= random;
		i++;
	}
	printf("%c", checksum);
	return (0);
}
