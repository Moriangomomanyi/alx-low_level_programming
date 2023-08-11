#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 * This program generates a random number and prints whether
 * it is positive, zero, or negative.
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
/* Seed the random number generator with the current time */
srand(time(NULL));
/* Generate a random number between -100 and 100 */
n = rand() % 201 - 100;
printf("The number %d\n", n);
if (n > 0)
{
printf("is positive\n")}
else if (n == 0)
{
printf("is zero\n");
}
else
{
printf("is negative\n");
}

return (0);
}
