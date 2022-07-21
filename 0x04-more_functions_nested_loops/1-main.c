#include "main.h"

/**
  * main - checks the code
  * Return: Always 0
  */
int main(void)
{
	char c;

	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	c = 0;
	printf("%d: %d\n", c, _isdigit(c));

	return (0);
}
