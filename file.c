#include <stdio.h>

int main()
{

    // file pointer declaration

    FILE *fp;

    char filename[25];
    char content[100];
    char buffer[100];

    // user input

    printf("enter a file name : ");
    scanf("%s", filename);

    printf("enter a file content : ");
    scanf("%s", content);

    // write to a file

    fp = fopen(filename, "w");

    if (fp == NULL)
    {
        printf("unable to open file, enter a file name first\n"); // error handling for no file name

        return 1;
    }

    fprintf(fp, "%s\n", content);
    fclose(fp);

    // opening file

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("unable to get data, try making a new file\n"); // error handling for no file

        return 1;
    }

    // display content in file

    while (fgets(buffer, sizeof(buffer), fp) != NULL)
    {
        printf("%s", buffer);
    }
    fclose(fp);

    return 0;
}