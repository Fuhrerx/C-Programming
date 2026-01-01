#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // malloc

    int *x;
    x = (int *)malloc(100 * sizeof(int));
    free(x); // release cache memory

    // calloc

    int *arr;
    arr = (int *)calloc(10, sizeof(int));
    free(arr);

    // realloc

    int *y;
    y = (int *)malloc(50 * sizeof(int));
    y = (int *)realloc(x, 100);

    return 0;
}