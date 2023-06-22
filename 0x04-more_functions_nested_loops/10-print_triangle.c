#include "main.h"

/**
 * print_triangle - function that prints triangle
 * function should print only a new line, if size is 0 or less
 * use the character # to print the triangle
 */
void print_triangle(int size)
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
