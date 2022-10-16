#include <stdio.h>
/**
 * main - entry point
 * Return: Success
 */

int main(void)
{
	int i = 0;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
