#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This function assigns a new value to
 * variable n each time it is executed.The
 * program should print whether the number stored
 * in variable n is positive or negative.
 *
 * Return: 0 on success, non-zero on failure
 */
int main(void)
{
        int n;
        int last_digit;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        last_digit = n % 10;

        printf("Last digit of %d is ", n);
        if (last_digit > 5)
        {
        printf("%d and is greater than 5\n", last_digit);
        }
        else if (last_digit == 0)
        {
        printf("%d and is 0\n", last_digit);
        }
        else
        {
        printf("%d and is less than 6 and not 0\n", last_digit);
        }
        return (0);
}
