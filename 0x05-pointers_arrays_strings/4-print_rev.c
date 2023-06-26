#include "main.h"

/**
 * print_rev - function that prints string in reverse
 * @s: string to print
 * Return: 0
 */
void print_rev(char *s)
{
	int lon = 0;
	int a;

	while (*s != '\0')
	{
		lon++;
		s++;
	}
	s--;
	for (a = lon; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
