#include <stdio.h>

int main(int argc, char *argv[])
{
    char name[6];
    int size;

    size = sizeof(name);

    printf("size of name variable : %d\n", size);
    printf("name : %s\n", name);

    return 0;
}