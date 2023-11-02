#include <stdlib.h>
#include <stdio.h>

/**
 * is_positive_number - Check if a string represents a positive number.
 * @str: The string to check.
 *
 * Return: 1 if the string represents a positive number, 0 otherwise.
 */
int is_positive_number(const char *str);

/**
 * main - execution begins
 * multiply_numbers - Multiply two positive numbers as strings.
 * @num1: The first positive number as a string.
 * @num2: The second positive number as a string.
 *
 * Return: A pointer to the result string, or NULL on failure.
 */
char *multiply_numbers(const char *num1, const char *num2);

int main(int argc, char *argv[])
{
	if (argc != 3 || !is_positive_number(argv[1]) || !is_positive_number(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	char *result = multiply_numbers(argv[1], argv[2]);

	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%s\n", result);
	free(result);
	return (0);
}

/*
 * is_positive_number - checks strings
 * @str: the string to check
 *
 * Return: a pointer to the resulting string
 */
int is_positive_number(const char *str)
{
	if (str == NULL || *str == '\0')
		return (0);

	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}

	return (1);
}

char *multiply_numbers(const char *num1, const char *num2)
{
	if (num1 == NULL || num2 == NULL)
		return (NULL);

	int len1 = 0;
	int len2 = 0;

	while (num1[len1] != '\0')
		len1++;

	while (num2[len2] != '\0')
		len2++;

	char *result = (char *)malloc(len1 + len2 + 1);

	if (result == NULL)
		return (NULL);

	for (int i = 0; i < len1 + len2; i++)
		result[i] = '0';

	result[len1 + len2] = '\0';

	for (int i = len1 - 1; i >= 0; i--)
	{
		for (int j = len2 - 1; j >= 0; j--)
		{
			int product = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0');

			result[i + j + 1] = product % 10 + '0';
			result[i + j] += product / 10;
		}
	}

	return (result);
}
