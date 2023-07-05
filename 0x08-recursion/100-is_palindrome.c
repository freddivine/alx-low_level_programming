#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * is_palindrome_recursive - Recursive helper function to check str
 * @s: The input string.
 * @start: The starting index of the current substring.
 * @end: The ending index of the current substring.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (!isalnum(s[start]))
		return (is_palindrome_recursive(s, start + 1, end));

	if (!isalnum(s[end]))
		return (is_palindrome_recursive(s, start, end - 1));

	if (tolower(s[start]) != tolower(s[end]))
		return (0);

	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_recursive(s, 0, len - 1));
}
