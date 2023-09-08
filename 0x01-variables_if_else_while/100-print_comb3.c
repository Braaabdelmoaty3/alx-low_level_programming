#include <stdio.h>
/**
 * main -  prints all possible different combinations of two digits
 *
 * Return: return 0
 */
int main(void)
{
	int and = '0';
	int aser = '0';

	for (aser = '0'; aser <= '9'; aser++)
	{
		for (and = '0'; and <= '9'; and++)
		{
			if (!((and == aser) || (aser > and)))
			{
				putchar(aser);
				putchar(and);
				if (!(and == '9' && aser == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
