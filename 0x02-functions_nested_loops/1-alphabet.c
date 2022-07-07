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

/**
  * main - check the code
  * Return: Always 0
  */
int main(void)
{
	print_alphabet();

	return (0);

}
