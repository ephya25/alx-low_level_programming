#include <stdio.h>
/**
 * main	- main block
 *
 * Description: prints alphabet in lowercase and uppercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	char c = 'A';

	while (c <= 'A')
	{
		putchar(c);
		c++;
	}

	putchar('\n')
	return (0);
}
