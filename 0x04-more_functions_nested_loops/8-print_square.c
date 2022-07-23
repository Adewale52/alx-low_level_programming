#include "main.h"

/**
  * print_square - prints the square
  *
  * @size: the size of the square
  */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int l1, l2;

		for (l1 = 0; l1 < size; l1++)
		{
			for (l2 = 0; l2 < size; l2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
