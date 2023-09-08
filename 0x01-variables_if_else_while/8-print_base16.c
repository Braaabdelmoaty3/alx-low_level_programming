#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: return 0
 */

int main(void)
{
	int nm = '0';
	int l = 'a';

	while (nm <= '9')
	{
		putchar(nm);
		nm++;
	}
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
