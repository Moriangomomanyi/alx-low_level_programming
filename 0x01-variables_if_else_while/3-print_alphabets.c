#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the alphabet in lowercase, then in uppercase,
 * using the `putchar` function.
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}

