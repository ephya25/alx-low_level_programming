#include "main.h"

/**
 * times_table - function that prints the 9 times table starting with 0
 */
void times_table(void)
{
	int v, o, b;

	for (v = 0; v <= 9; v++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (o = 1; o <= 9; o++)
		{
			b = (v * o);
			if ((b / 10) > 0)
			{
				_putchar((b / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((b % 10) + '0');

			if (o < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

