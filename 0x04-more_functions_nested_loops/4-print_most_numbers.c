include "main.h"

/**
 * print_most_numbers - function that prints numbers from 0 to 9
 * 2 and 4 are not printed
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int numb;

	for (numb = 0; numb <= 9; numb++)
	{
		if (numb != 2 && numb != 4)
			_putchar((numb % 10) + '0');
	}
	_putchar('\n');
}
