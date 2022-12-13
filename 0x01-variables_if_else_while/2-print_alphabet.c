#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters
 *
 * Return: Always 0 (Success)
 *
*/

int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	putchar('\n');
	return 0;
}
