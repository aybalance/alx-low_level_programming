#include <stdio.h>
/**
 * main - entry point
 * Return: Success
 */

int main(void)
{
	int i = 0;
	int j = 0;

	for (i = '0'; i <= '8'; i++)
	{
		{
			for (j = i + 1; j <= '9'; j++)
			{
				putchar(i);
				putchar(j);

				if (!(i == '8' && j == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
