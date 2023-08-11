#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase,
 * followed by a new line, using the `putchar` function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + '0');

	for (num = 'a'; num <= 'f'; num++)
		putchar(num);

	putchar('\n');
	return (0);
}
