#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 *
 * Return: Nothing
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putcha(c);
	}
	_putchar('\n');
}
