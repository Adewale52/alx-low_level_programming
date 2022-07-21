#include "main.h"

/**
  * print_numbers - prints the number
  */
void print_numbers(void)
{
	int num1 = '0';

	while (num1 <= '9')
	{
		_putchar(num1);
		num1++;
	}
	_putchar('\n');
}
