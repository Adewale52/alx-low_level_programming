#include "main.h"

/**
  * _isalpha - checks the alphabet
  * @c: the variable containing the character a-z & A-Z
  * Return: 1 if c is a letter, lowercase or uppercase otherwise 0
  */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

