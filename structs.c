#include <stdio.h>

// declaration and definition of structures *(singular)
typedef struct
{
    char name[20];
    char author[25];
    float price;

} books;

// declaration and definition of structures *(array)

typedef struct
{
    char items[25];
    char desc[50];
    float mrp;

} list;

// global struct declaration

books b1;
list l[2];

// function prototypes

void display_books();
void display_list();
void read_books();
void read_list();

int main(int argc, char *argv[])
{

    printf("\nenter the details of books\n");
    read_books();

    printf("\nenter the details of items brought\n");
    read_list();

    printf("\nlist of books\n");
    display_books();

    printf("\nlist of items brought\n");
    display_list();

    return 0;
}

void display_books()
{
    printf("name of the book : %s\n", b1.name);

    printf("author of the book : %s\n", b1.author);

    printf("price of the book : %f\n", b1.price);

    printf("\n");
}

void display_list()
{
    for (int i = 0; i < 2; i++)
    {

        printf("items brought : %s\n", l[i].items);
        printf("description : %s\n", l[i].desc);
        printf("price of the item : %f\n", l[i].mrp);
        printf("\n");
    }
}

void read_books()
{
    printf("name :");
    scanf("%s", b1.name);

    printf("author :");
    scanf("%s", b1.author);

    printf("price :");
    scanf("%f", &b1.price);
}

void read_list()
{
    for (int i = 0; i < 2; i++)
    {
        printf("name of the item :");
        scanf("%s", l[i].items);

        printf("description :");
        scanf("%s", l[i].desc);

        printf("MRP :");
        scanf("%f", &l[i].mrp);
    }
}