#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all single digit numbers
 * of base 10 starting from 0
 *
 * Return: return 0
 */

int main(void)
{
	int dnum = 0;

	while (dnum < 10)
	{
		printf("%d", dnum);
		dnum++;
	}
	putchar('\n');
	return (0);
}
