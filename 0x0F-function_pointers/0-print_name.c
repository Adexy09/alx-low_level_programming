#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a given name using a function
 * @name: The name to be printed
 * @f: A function pointer to a printing function
 */
void print_name(char *name, void (*f)(char *))
{
	/* Check if the name is not NULL and the function is not NULL */
	if (name != NULL && f != NULL)
	{
		/* Call the function pointed to by f and pass the name */
		f(name);
	}
}

/**
 * print_name_to_console - Prints a name to the console
 * @name: The name to be printed
 */
void print_name_to_console(char *name)
{
	/* Check if the name is not NULL */
	if (name != NULL)
	{
		printf("My name is %s.\n", name);
	}
}

int main(void);
{
	char myName[] = "John";

	/* Print the name using the print_name function */
	print_name(myName, print_name_to_console);

	return (0);
}

