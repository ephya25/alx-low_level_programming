#include <stdio.h>
/**
 * main	- main block
 *
 * Description: print all the letters except 'q' and 'e' in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
