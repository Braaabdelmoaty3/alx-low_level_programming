#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  a program that prints the alphabet in lowercase,
 * and then in uppercase
 *
 * Return: 0
 */

int main(void)
{
	int al = 'a';
	int AL = 'A';

	while (al <= 'z')
	{
		putchar(al);
		al++;
	}
	while (AL <= 'Z')
	{
		putchar(AL);
		AL++;
	}
	putchar('\n');
	return (0);

}
