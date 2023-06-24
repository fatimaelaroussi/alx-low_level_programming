#include "main.h"
/**
  *_isupper(c) - check the letter if it is upper
  *Return: 0 if it is lower . 1 if it is upper
  */
int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}		
}
