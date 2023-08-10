#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
 /**
 * main - Entry point
 * Description: Prints the specified text to the standard error.
 * Return: Always 1 (Failure)
 */
int main(void)
{
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, message, 59);
return (1);
}
