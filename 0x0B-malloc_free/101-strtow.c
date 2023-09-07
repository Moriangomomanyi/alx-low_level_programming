#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - Split a string into words.
 * @str: The input string to be split.
 *
 * Return: Pointer to an array of strings (words), or NULL on failure.
 * Each element of the array contains a single word, null-terminated.
 * The last element of the returned array is NULL.
 * Words are separated by spaces.
 */
char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return (NULL);

    char **words = NULL;
    int word_count = 0;
    int i, j, k, len = strlen(str);

    for (i = 0; i < len; i++)
    {
        if (str[i] != ' ')
        {
            word_count++;
            while (str[i] != ' ' && str[i] != '\0')
                i++;
        }
    }

    if (word_count == 0)
        return (NULL);

    words = malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return (NULL);

    for (i = 0, k = 0; k < word_count; k++)
    {
        while (str[i] == ' ')
            i++;

        j = i;
        while (str[i] != ' ' && str[i] != '\0')
            i++;

        words[k] = malloc((i - j + 1) * sizeof(char));
        if (words[k] == NULL)
        {
            for (k--; k >= 0; k--)
                free(words[k]);
            free(words);
            return (NULL);
        }

        strncpy(words[k], &str[j], i - j);
        words[k][i - j] = '\0';
    }

    words[word_count] = NULL;
    return (words);
}

int main(void)
{
    char **word_array;
    char str[] = "This is a test string";

    word_array = strtow(str);

    if (word_array == NULL)
    {
        printf("strtow failed\n");
        return (EXIT_FAILURE);
    }

    for (int i = 0; word_array[i] != NULL; i++)
    {
        printf("%s\n", word_array[i]);
        free(word_array[i]);
    }

    free(word_array);
    return (EXIT_SUCCESS);
}
