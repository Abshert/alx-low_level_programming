#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int main(void)
{
    int a, b, c;
    int largest;

    a = 972;
    b = -98;
    c = 0;

    if(a >= b && a >= c)
    {
        printf("largest number = %d" , a);
    }
    else if(b >= a && b >= c)
    {
        printf("largest number = %d", b);
    }
    else
    {
        printf("largest number = %d" , c);
    }

    return (largest);
}
