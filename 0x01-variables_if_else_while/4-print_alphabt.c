#include <stdio.h>
/**
 * main	- print all the letters except e and q in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c !=e)
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
