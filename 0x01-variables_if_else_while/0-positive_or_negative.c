#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
  *main - entry piont
  *Return: always return 0
  */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
		printf("%d is Zero\n", n);
	else
		printf("%d is Negative\n", n);
	return (0);
}