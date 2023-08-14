#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1, num2;
for (num1 = 0; num1 <= 8; num1++)
{
for (num2 = num1 + 1; num2 <= 9; num2++)
{
putchar(num1 + '0');
if (num1 < 8 || num2 < 9){
putchar(',');
putchar(' ');}
putchar(num2 + '0');
}
}
putchar('\n');
return (0);
}
