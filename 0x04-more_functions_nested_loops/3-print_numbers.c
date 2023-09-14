#include "main.h"

/**
 * print_number print digiit numbers 0-9
 * return: void always 0.
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
		_putchar('\n');
}

