#include "main.h"
/**
 * _islower - checks if c is lowercase
 *  @c: the charachter to compare
 *  Return: the lower case
 */

int _islower(int c)
{
	return ('a' <= c && 'z' >= c);
}
