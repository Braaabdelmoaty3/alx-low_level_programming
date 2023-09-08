#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the alphabet in lowercase
 *
 * Return: return  0
 */
int main(void)
{
	int al = 'a';

	while (al <= 'z')
	{
		putchar(al);
		al++;
	}
	putchar('\n');
	return (0);

}
