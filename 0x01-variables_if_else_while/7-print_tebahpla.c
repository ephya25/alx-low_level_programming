#include <stdio.h>
/**
 * main	- prin lowercase alphabet in reverse using putchar as function
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
