#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - generates keygen.
 * Return: 0 Always.
 * print_number - prints an integer.
 * @n: input integer.
 * void print_number(int n)
	* unsigned int m, d, count;
 */
int main(void)
void print_number(int n)
{
	int r = 0, c = 0;
	time_t t;
	unsigned int m, d, count;

	if (n < 0)
	{
@@ -23, 3 + 35, 18 @@
		d /= 10;
		count *= 10;
	}

	srand((unsigned int) time(&t));
	while (c < 2772)
	for (; count >= 1; count /= 10)
	{
		r = rand() % 128;
		if ((c + r) > 2772)
			break;
		c = c + r;
		printf("%c", r);
		_putchar(((m / count) % 10) + 48);
	}
	printf("%c\n", (2772 - c));
	return (0);
}
