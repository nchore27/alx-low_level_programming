#include "main.h"
/**
 * find_strlen - Returns the length of a string
 * @s: pointer to a string to be measured
 * Return: Length
 */
int find_strlen(char *s)
{
	int x;

	x = 0;
	if (*(s + x))
	{
		++x;
		x += find_strlen(s + x);
	}
	return (x);
}

/**
 * check_palindrome - Checks if a string is a palindrome
 * @S: String
 * @x: Length of s
 * @i: index of string
 * Return: 0
 */

int check_palindrome(char *s, int x, int i)
{
	if (s[i] == s[x / 2])
	{
		return (1);
	}
	if (s[i] == s[x - i - 1])
	{
		return (check_palindrome(s, x, i + 1));
	}
	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: a string
 * Return: -1
 */

int is_palindrome(char *s)
{
	int x;
	int y = find_strlen(s);

	x = 0;
	if (!(*s))
	{
		return (1);
	}
	return (check_palindrome(s, y, x));
}
