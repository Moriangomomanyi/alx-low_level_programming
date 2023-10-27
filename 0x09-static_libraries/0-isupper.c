#include "main.h"
/**
 * _isupper - uppercases aiphabets
 * @c: char to check the ailphabets
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
