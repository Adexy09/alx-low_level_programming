#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character c to stdout
 * @c  character to be  printed
 *
 * Return: 1 On success.
 * On error, -1 is returned, and the error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

