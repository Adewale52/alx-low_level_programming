#include "main.h"

/**
  * main - prints the number from 1-100
  * and prints multiples of 3 as fizz
  * multiples of 5 as buzz, both as FizzBuzz
  * Return: Always zero
  */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
			printf(" Fizz");
		else if ((i % 5 == 0) && (i % 3 != 0))
			printf(" Buzz");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf(" FizzBuzz");
		else if (i == 1)
			printf("%d", i);
		else
			printf(" %d", i);
	}
	printf("\n");
	return (0);
}
