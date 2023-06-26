#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: input string
 * Return: half of input
 */
void puts_half(char *str)
{
	int m, n, lon;

	lon = 0;

	for (m = 0; str[m] != '\0'; m++)
		lon++;

	n = (lon / 2);

	if ((lon % 2) == 1)
		n = ((lon + 1) / 2);

	for (m = n; str[m] != '\0'; m++)
		_putchar(str[m]);
	_putchar('\n');
}
