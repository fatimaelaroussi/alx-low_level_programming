#include "main.h"
/**
 *_isalpha - check if it is an alphabet
 *@c: charcter
 *Return: 1 if it is an alpha. 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
