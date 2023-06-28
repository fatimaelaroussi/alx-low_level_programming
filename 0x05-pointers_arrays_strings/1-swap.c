#include <stdio.h>
/**
  *swap_int - swap the value of two numbers between them
  *Return: nothing
  *@a: the first integer input pointer
  *@b: the second integer input pointer
  */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
