#include <stdio.h>

int main()
{

    // for loop

    printf("numbers from 1 to 10 using for loop\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }

    // while loop

    printf("numbers from 1 to 10 using while loop\n");

    int i = 1;
    while (i <= 10)
    {
        printf("%d\n", i);
        i++;
    }

    // do while loop

    printf("numbers from 1 to 10 using do while loop\n");

    do
    {
        printf("%d\n", i);
        i++;
    } while (i >= 10);

    return 0;
}