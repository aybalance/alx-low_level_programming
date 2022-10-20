#include "main.h"
/**
 * _islower - checks if c is alphabetic
 * @c: the charachter to compare
 * Return: if the character is alpha or not
 */

int _isalpha(int c)
{
	return (('a' <= c && 'z' >= c) || ('A' <= c && 'Z' >= c));
}
