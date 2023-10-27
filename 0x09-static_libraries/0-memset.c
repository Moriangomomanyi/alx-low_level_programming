#include "main.h"

/**
 * _memset - Program fills a block of memory with a specific value
 * @s: commencing address of memory to be repleted
 * @b: the value
 * @n: number of bytes to be altered
 *
 * Return: alter array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)

{
	int a = 0;

	for (; n > 0; a++)

	{
		s[a] = b;
		n--;
	}
	return (s);
}

