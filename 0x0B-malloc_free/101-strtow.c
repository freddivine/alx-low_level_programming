#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (in_word)
			{
				in_word = 0;
			}
		}
		else
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		}
	}
	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	char **words;
	int word_count, i, j, k, len;
	int in_word = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	j = 0;
	len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (in_word)
			{
				words[j] = malloc((len + 1) * sizeof(char));
				if (words[j] == NULL)
				{
					for (k = 0; k < j; k++)
						free(words[k]);
					free(words);
					return (NULL);
				}

				strncpy(words[j], str + i - len, len);
				words[j][len] = '\0';

				in_word = 0;
				j++;
				len = 0;
			}
		}
		else
		{
			if (!in_word)
			{
				in_word = 1;
			}
			len++;
		}
	}

	if (in_word)
	{
		words[j] = malloc((len + 1) * sizeof(char));
		if (words[j] == NULL)
		{
			for (k = 0; k <= j; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}
		strncpy(words[j], str + i - len, len);
		words[j][len] = '\0';

		j++;
	}

	words[j] = NULL;
	return (words);
}
