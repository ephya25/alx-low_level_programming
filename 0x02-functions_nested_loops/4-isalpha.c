#include "main.h"

/**
 * _isalpha - check for alphabetic characters
 * @c: input character
 * Return: 1 is chracter is lowercase or uppercase, if otherwise 0
 */
int _isalpha(int c)
{
	char lower, upper;
	int isalpha = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isalpha = 1;
		}
	}
	return (isalpha);
}
