#include <stdio.h>
#include <unistd.h>
/**
 * main	- print "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19,
 * on a new line, to the standard error.
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return(1);
}
