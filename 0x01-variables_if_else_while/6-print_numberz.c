#include <stdio.h>

/**
 * main -  prints all single digit numbers
 *
 * Return: return 0
 */

int main(void)
{
	int dnum = '0';

	while (dnum <= '9')
	{
		putchar(dnum);
		dnum++;
	}
	putchar('\n');
	return (0);
}
