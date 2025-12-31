#include <stdio.h>

int main()
{
    // declaration and initialiation of 1D arrays

    char name1[25] = "akshay";
    char name2[25] = {'a', 'k', 's', 'h', 'a', 'y', '\0'};

    // declaration and initialiation of 2D arrays\matrix

    int matrix[2][2] = {{1, 2}, {3, 4}};

    // reading\looping through an 1D array

    for (int i = 0; i < 6; i++)
    {
        printf("%c", name1[i]);
    }
    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%c", name2[i]);
    }
    printf("\n");

    // reading\looping through an 2D array\matrix

    int i;
    int j;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d", matrix[i][j]);
        }
    }

    return 0;
}