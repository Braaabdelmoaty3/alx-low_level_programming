#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: return
 */
int main(void)
{
	int nm = '0';

	while (nm <= '9')
	{
		putchar(nm);
		if (nm != '9')
		{
			putchar(',');
			putchar(' ');
		}
		nm++;
	}
	putchar('\n');
	return (0);
}
