#include "main.h"

/**
 * puts2 - function that prints every character of the string starting with the first
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int lon = 0;
	int b = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		lon++;
	}
	b = lon - 1;
	for (o = 0 ; o <= b ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
