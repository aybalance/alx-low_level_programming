#include <stdio.h>
/**
 * main - entry point
 * Return: Success
 */

int main(void)
{
	int i = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
