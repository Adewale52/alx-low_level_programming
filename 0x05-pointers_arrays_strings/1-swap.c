#include "main.h"

/**
  * swaps_int - the value of two integer
  * @a: pointer a
  * @b: pointer b
  */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
