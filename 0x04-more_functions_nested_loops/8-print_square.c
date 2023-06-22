#include "main.h"

/**
 * print_square - function that prints a square
 * if size is 0 or less, the function should print only a new line
 * us the character # to print the square
 * Return: nothing
 */
void print_square(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar(35);
		}
		if (a != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
