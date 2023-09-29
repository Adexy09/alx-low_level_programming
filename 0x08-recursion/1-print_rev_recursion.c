
#include "main.h"
/**
 * _prints_rev_recursion - to Prints a string in reverse.
 * @s: This string to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

