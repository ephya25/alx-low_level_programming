#include "main.h"

/**
 * jack_bauer - function that print every minute of the day of Jack Bauer
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int t, m;

	for (t = 0; t < 24; t++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((t / 10) + '0');
			_putchar((t % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
