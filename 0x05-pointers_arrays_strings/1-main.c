#include "main.h"

/**
  * main - checks the code
  * Return: Always zero
  */
int main(void)
{
	int a;
	int b;

	a = 45;
	b = 55;

	printf("the value of a = %d\n and b = %d\n", a, b);
	swap_int(&a, &b);
	printf("the value of a = %d\n the value of b = %d\n", a, b);

	return (0);
}

