#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet in lowercase with \n
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
			ch++;
	}

	_putchar('\n');
}

