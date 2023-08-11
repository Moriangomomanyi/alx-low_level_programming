#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse,
 * followed by a new line, using the `putchar` function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');
	return (0);
}
