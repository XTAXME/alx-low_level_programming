#include <stdio.h>

/**
 * main - the main printing funtion
 * less than 4000000.
 * Return: 0.
 */
int main(void)
{
    long int a = 1, b = 2, next, count;

    printf("%ld, %ld", a, b);

    for (count = 2; count < 50; count++
    {
        next = a + b;
        printf(", %ld", next);
        a = b;
        b = next;
    }

    printf("\n");
    return (0);
}
