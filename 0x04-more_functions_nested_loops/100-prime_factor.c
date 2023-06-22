#include "main.h"
#include <stdio.h>

/** main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	long int n, pr;

	n = 612852475143;
	for (pr = 2; pr <= n; pr++)
	{
		if (n % pr == 0)
		{
			n /= pr;
			pr--;
		}
	}
	printf("%ld\n", pr);
	return (0);
}
