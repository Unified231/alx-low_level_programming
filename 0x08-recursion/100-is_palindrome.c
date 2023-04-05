#include "main.h"

int check pal(char *s, int i, int len);
int strlen recursion(char *s);

/**
*is_palindrome-checks if a string is a palindrome
*@s: string to reverse
*
*Return: 1 if it is, 0 it's not
**/

int is_palindrome(char *s)
{
	if (*s == 0)
	return (1);

	return (check pal(s, 0, strlen recursion(s)));
}

/**
*strlen recursion-return the length of a string
*@s: string to calculate the length
*
*Return length of the string
*/

int_strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
*check pal-checks the characters recursively for palindrome
*@s: string to check
*@i: iterator
*@len: length of the string
*
*Return: 1 if palindrome, 0 if not
**/

int check pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	return (0);

	if (i >= len)
	return (1);

	return (check pal(s, i, +1, len - 1));

}
