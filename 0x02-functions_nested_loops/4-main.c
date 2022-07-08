#include "main.h"

/**
  * main - checks the code
  * Return: Always 0
  */
int main(void)
{
	int c;

	c = _isalpha('A');
	_putchar(c + '0');
	c = _isalpha('g');
	_putchar(c + '0');
	c = _isalpha(';');
	_putchar(c + '0');
	c = _isalpha('x');
	_putchar(c + '0');
	_putchar('\n');
	return (0);
}



