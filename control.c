#include <stdio.h>

int main()
{
    // if statement

    int x = 10;

    if (x > 5)
    {
        printf("%d is greater than 5", x);
    }

    // if else statement

    if (x < 5)
    {
        printf("%d is greater than 5", x);
    }
    else
    {
        printf("%d is less than 5", x);
    }

    // nested if

    if (x > 5)
    {
        if (x < 10)
        {
            printf("%d is less than 10", x);
        }
        else
        {
            printf("%d is greater than 10", x);
        }
    }
    else
    {
        printf("%d is greater than 10", x);
    }
    return 0;
}