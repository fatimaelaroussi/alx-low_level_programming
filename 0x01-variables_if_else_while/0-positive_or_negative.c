#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
  *main - entry piont
  *Return: always return 0
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is Zero\n", n);
	}
	else
	{
		printf("%d is Negative\n", n);
	}
	return (0);
}
