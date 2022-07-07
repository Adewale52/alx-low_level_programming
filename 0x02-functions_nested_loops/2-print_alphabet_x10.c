#include "main.h"

/**
  * print_alphabet_x10 - Prints 10x the ALP in lowercase
  */
void print_alphabet_x10(void)
{
	char xter;
	int i;

	i = 0;
	while (i < 10)
	{
		xter = 'a';
		while (xter <= 'z')
		{
			_putchar(xter);
			xter++;
		}
		i++;
		_putchar('\n');
	}
}

