#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet in lowercase & uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c;
	char C;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	for (C = 'A' ; C <= 'Z' ; ++C)
		putchar(C);
	putchar('\n');
	return (0);
}
