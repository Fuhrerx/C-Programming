#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    char active[4];
    char modified[4];
    int isActive;

    printf("is the user still active? (yes/no) : ");
    scanf("%s", &active);

    for (int i = 0; active[i] != '\0'; i++)
    {
        modified[i] = tolower(active[i]);
    }

    if (modified == "yes")
    {
        isActive == 1;
    }
    else
    {
        isActive == 0;
    }

    if (modified == "no")
    {
        isActive = 0;
    }
    else
    {
        isActive == 1;
    }

    switch (isActive)
    {
    case 1:
        printf("the user is active");
        break;

    case 0:
        printf("the user is inactive");
        break;

    default:
        printf("invalid");
    }
    return 0;
}