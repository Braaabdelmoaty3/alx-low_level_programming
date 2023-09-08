#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: return
 */

int main(void)
{
	int ral = 'z';

	while (ral >= 'a')
	{
		putchar(ral);
		ral--;
	}
	putchar('\n');
	return (0);
}
