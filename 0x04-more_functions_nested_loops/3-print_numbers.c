#include "main.h"

/**
 * Main -  Print 0 to 9
 * print_numbers - print 0-9
 *  Return: always 0
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + 48);
	_putchar('\n');
}

