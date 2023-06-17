#include <stdio.h>
/**
 * main	- all possible combination of of single digit numbers
 *
 * should be in ascending order
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
