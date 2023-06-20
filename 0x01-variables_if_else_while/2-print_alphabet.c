#include <stdio.h>

/**
 * main	- main block
 *
 * Description: prints alphabet in lowercase using putchar 
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
