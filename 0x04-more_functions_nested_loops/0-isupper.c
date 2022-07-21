#include "main.h"

/**
  * _isupper - checks for the uppercase character
  * @c: the charcater to print
  * Return: Always 1 for uppercase & 0 for lowercase
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	return (0);
}
