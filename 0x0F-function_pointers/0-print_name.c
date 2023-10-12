#include <stdio.h>
#include "function_pointers.h"

/**
 * to write a function that prints a name
 * @name: name of a person that write code
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if(name == NULL ||f == NULL)
		return

		f(name);
}
