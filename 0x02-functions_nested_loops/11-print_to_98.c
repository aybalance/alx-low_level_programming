#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the beginning
 */

void print_to_98(int n)
{
	int i;

	if (n < 99)
	{
		for (i = n; i < 99; i++)
		{
			print(i);
		}
	}
	else
	{
		for (i = n; i > 97; i--)
		{
			print(i);
		}
	}
	_putchar('\n');
}
/**
 * print - prints a number
 * @n: The number
 */

void print(int n)
{
	int i;

	if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	else
	{
		i = n;
	}
	if (i >= 100)
	{
		_putchar('0' + i / 100);
		_putchar('0' + (i / 10) % 10);
	}
	else if (i >= 10)
	{
		_putchar('0' + i / 10);
	}
	_putchar('0' + i % 10);
	if (n != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
}
