#include "main.h"

/**
 * _islower - check if character is a lowercase
 * @c: is the input character
 * Return: 1 if c is a lowercase, if otherwise 0
 */
int _islower(int c)
{
	if(c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
