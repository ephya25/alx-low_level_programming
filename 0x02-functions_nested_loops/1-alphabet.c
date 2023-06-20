#include "main.h"

/**
 * main	- print alphabets in lowercase
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char let;

	let = 'a';

	while (let <= 'z')
	{
		_putchar(let);
		let++;
	}

	_putchar('\n');
}
