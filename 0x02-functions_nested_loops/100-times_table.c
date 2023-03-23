#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: integer value of the times table to print
 *
 * Return: void
 */

void print_times_table(int n)
{
    if (n < 0 || n > 15) {
        return;
    }

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            int result = i * j;
            if (j == 0) {
                _putchar('0');
            } else {
                _putchar(' ');
            }
            if (result < 10 && j > 0) {
                _putchar(' ');
                _putchar(' ');
            } else if (result < 100) {
                _putchar(' ');
            }
            if (result < 10) {
                _putchar(result + '0');
            } else {
                _putchar((result / 10) + '0');
                _putchar((result % 10) + '0');
            }
            if (j < n) {
                _putchar(',');
            } else {
                _putchar('\n');
            }
        }
    }
}

