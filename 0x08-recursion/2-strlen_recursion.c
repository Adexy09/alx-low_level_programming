#include "main.h"
/**
 * _strlen_recursion - This will Returns the length of of  string.
 * @s: Thid is the  string to be measured.
 *
 * Return: Kindly return The of length of the string.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}

