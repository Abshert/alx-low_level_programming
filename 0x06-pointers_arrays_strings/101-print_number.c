#include <stdio.h>
#include <stdlib>

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */

void printnumber(int n)
{

   if (n < 0) {
       putchar('-');
       n = -n;
   }

   if (n == 0)
      putchar('0');

   if (n/10)
      printnumber(n/10);

   putchar(n%10 + '0');
}

int main(int argc, char** argv)
{
   int n = atoi(argv[1]);
   printnumber(n);
   printf("\n");
}
