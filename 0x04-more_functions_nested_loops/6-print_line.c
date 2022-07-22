#include "main.h"

/**
  * print_line - display \n if n is zero or less else display
  * @n: the number of times the line is printed
  */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

