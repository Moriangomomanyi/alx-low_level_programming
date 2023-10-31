#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * count_words - Count the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int word_count = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}

	return (word_count);
}

/**
 * extract_word - Extract a word from a string.
 * @str: The input string.
 * @start: The start index of the word.
 * @end: The end index of the word.
 *
 * Return: A newly allocated string containing the word.
 */
char *extract_word(char *str, int start, int end)
{
	int i;
	int j = 0;

	char *word = malloc(sizeof(char) * (end - start + 2));

	if (word == NULL)
	{
		return (NULL);
	}

	for (i = start; i <= end; i++)
		word[j++] = str[i];

	word[j] = '\0';

	return (word);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words)
 *         or NULL if str is NULL or str is empty
 */
char **strtow(char *str)
{
	int i = 0;
	int start;
	int word_index = 0;
	int word_count = count_words(str);
	char **words = malloc(sizeof(char *) * (word_count + 1));

	if (str == NULL || *str == '\0')
		return (NULL);

	if (words == NULL)
		return (NULL);

	start = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			int end = i;

			words[word_index] = extract_word(str, start, end);
			if (words[word_index] == NULL)
			{
				while (word_index >= 0)
					free(words[word_index--]);
				free(words);
				return (NULL);
			}
			start = i + 1;
			word_index++;
		}
	}

	words[word_index] = NULL;

	return (words);
}
