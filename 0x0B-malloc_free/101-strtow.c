#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_space(char c);
int count_words(char *str);
char **strtow(char *str);
char *get_word(char *str);
char **free_memory(char **words, int index);

/**
 * is_space - Checks if a character is a space.
 * @c: The character to check.
 *
 * Return: 1 if c is a space, 0 otherwise.
 */
int is_space(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words from.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
    int i, count, len;

    len = strlen(str);
    count = 0;

    for (i = 0; i < len; i++)
    {
        if (!is_space(str[i]) && (is_space(str[i + 1]) || str[i + 1] == '\0'))
            count++;
    }

    return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k, len, word_count;

    if (str == NULL || *str == '\0')
        return (NULL);

    word_count = count_words(str);
    words = malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return (NULL);

    for (i = 0, j = 0; i < word_count; i++)
    {
        while (is_space(str[j]))
            j++;

        len = 0;
        while (!is_space(str[j + len]) && str[j + len] != '\0')
            len++;

        words[i] = malloc((len + 1) * sizeof(char));
        if (words[i] == NULL)
            return (free_memory(words, i));

        for (k = 0; k < len; k++)
            words[i][k] = str[j++];

        words[i][k] = '\0';
    }

    words[i] = malloc(sizeof(char));
    if (words[i] == NULL)
        return (free_memory(words, i));

    words[i][0] = '\0';

    return (words);
}

/**
 * get_word - Retrieves a single word from a string.
 * @str: The string to get the word from.
 *
 * Return: A pointer to the word.
 */
char *get_word(char *str)
{
    int i, len;
    char *word;

    len = 0;
    while (!is_space(str[len]) && str[len] != '\0')
        len++;

    word = malloc((len + 1) * sizeof(char));
    if (word == NULL)
        return (NULL);

    for (i = 0; i < len; i++)
        word[i] = str[i];

    word[i] = '\0';
    return (word);
}

/**
 * free_memory - Frees the allocated memory for words.
 * @words: The array of words.
 * @index: The index up to which the memory should be freed.
 *
 * Return: NULL
 */
char **free_memory(char **words, int index)
{
    int i;

    for (i = 0; i <= index; i++)
        free(words[i]);

    free(words);
    return (NULL);
}
