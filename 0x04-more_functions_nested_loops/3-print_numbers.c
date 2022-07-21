#include "main.h"

/**
  * print_number - prints the number form 0-9
  * @num1: the number to print
  */
void print_numbers(void)
{
	int num1;
	num1 = '0';
	while(num1 <= '9')
	{
		_putchar(num1);
		num1++;
	}
	_putchar('\n');
}
