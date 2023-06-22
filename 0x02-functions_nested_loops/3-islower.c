#include "main.h"
/**
  * _islower - check the character if it is lower
  *@c: the character in ascii code
  *Return:  if lower case. 0 if otherwise
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
