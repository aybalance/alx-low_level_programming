#include "main.h"
/**
 * times_table - prints the time table
 * Return: The time table
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
		if (i * j >= 10)
		{
			_putchar('0' + (i * j) / 10);
			_putchar('0' + (i * j) % 10);

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		else
		{
			if (j != 0)
			{
				_putchar(' ');
			}
			_putchar('0' + (i * j) % 10);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
	}
}
