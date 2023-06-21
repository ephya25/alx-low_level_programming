#include "main.h"

/**
 * print_times_table - function that prints n times table, starting with 0
 *
 * n is greater 15 or less than 0
 *
 * function should not print anything
 */
void print_times_table(int n)
{
	int q, r, s;

	if (n >= 0 && n <= 15)
	{
		for (q = 0; q <= n; q++)
		{
			for (r = 0; r <= n; r++)
			{
				s = q * r;
				if (s == 0)
				{
					_putchar(s + '0');
				} else if (s < 10 && r != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(s + '0');
				} else if (s >= 10 && s < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((s / 10) + '0');
					_putchar((s % 10) + '0');
				} else if (s >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((s / 100) + '0');
					_putchar(((s / 100) % 10) + '0');
					_putchar((s % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
