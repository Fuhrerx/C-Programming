#include <stdio.h>

int main(int argc, char *argv[])
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5 || i == 6)
        {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}