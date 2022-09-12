#include "main.h"

/**
  * swap_int - swaps the value of the two number
  * @a: Pointer of the first value
  * @b: Pointer of the second value
  */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
