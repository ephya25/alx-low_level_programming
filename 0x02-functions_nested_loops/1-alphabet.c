#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
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
