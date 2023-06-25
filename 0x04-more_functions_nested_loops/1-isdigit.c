#include "main.h"
/**
  *_isdigit - check the letter if it is digit
  *Return: 1 if it is a digit . 0 otherwise
  *@c: char
  */
int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

