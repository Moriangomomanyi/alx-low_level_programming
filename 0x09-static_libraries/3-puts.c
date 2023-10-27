#include "main.h"
/**
 *_puts - program prints a string to stdout.
 *@str: the string to be printed.
 *
 * */
void _put(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
