#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The times table to be printed.
 */
void print_times_table(int n)
{
    int row, column, product;

    if (n < 0 || n > 15)
        return;

    for (row = 0; row <= n; row++)
    {
        for (column = 0; column <= n; column++)
        {
            product = row * column;

            if (column == 0)
                printf("%d", product);
            else if (product < 10)
                printf("   %d", product);
            else if (product < 100)
                printf("  %d", product);
            else
                printf(" %d", product);

            if (column < n)
                printf(",");
            else
                printf("\n");
        }
    }
}
