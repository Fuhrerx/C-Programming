#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char name[] = "akshay ";
    char name2[] = "babu";
    char a[] = "ak47";
    char b[] = "kar98";
    char concat[15], copy[10];
    int len, len1, cmp, cmp1;

    // length

    len = strlen(name);
    printf("length of name = %d\n", len);

    len1 = strlen(name2);
    printf("length of name2 = %d\n", len1);

    // concatination

    strcat(name, name2);
    printf("full name : %s\n", name);

    // copy strings

    strcpy(copy, name);
    printf("copied name : %s\n", copy);

    // compare

    cmp = strcmp(copy, name);
    cmp1 = strcmp(a, b);

    if (cmp == 0)
    {
        printf("theyre equal\n");
    }
    else
    {
        printf("theyre not equal\n");
    }

    if (cmp1 == 0)
    {
        printf("theyre equal\n");
    }
    else
    {
        printf("theyre not equal\n");
    }

    return 0;
}