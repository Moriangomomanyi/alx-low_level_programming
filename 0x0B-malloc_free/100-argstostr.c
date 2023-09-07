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
        return NULL;

    int word_count = 0;
    char **words = NULL;

    // Count the number of words
    for (char *c = str; *c; c++) {
        if (*c != ' ') {
            word_count++;
            while (*c && *c != ' ')
                c++;
        }
    }

    if (word_count == 0)
        return NULL;

    // Allocate memory for the word array
    words = (char **)malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    int word_index = 0;
    char *token = strtok(str, " ");

    // Tokenize the string and store the words in the array
    while (token != NULL) {
        words[word_index] = strdup(token);
        if (words[word_index] == NULL) {
            // Memory allocation failed, clean up and return NULL
            for (int i = 0; i < word_index; i++) {
                free(words[i]);
            }
            free(words);
            return NULL;
        }
        word_index++;
        token = strtok(NULL, " ");
    }

    words[word_index] = NULL;
    return words;
}

