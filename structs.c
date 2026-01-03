#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// global variables

int num_items;
float r;
float area;

// macros

#define half 0.5
#define third 0.25
#define pi 3.141

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
    int items;
    char name[50];
    float mrp;
} list;

// global struct declaration

books b1;
list *l;

// function prototypes

int main1();
void display_books();
void display_list();
void read_books();
void read_list();
float circle();

int main(int argc, char *argv[])
{
    printf("\nenter the details of books\n");
    printf("\n");
    read_books();

    main1();

    printf("\nenter the details of items brought\n");
    printf("\n");
    read_list();

    printf("\nlist of books\n");
    printf("\n");
    display_books();

    printf("\nlist of items brought\n");
    printf("\n");
    display_list();

    free(l);
    l = NULL;

    area = circle();
    printf("\narea of the given circle of radius %f : \n", r);
    printf("\n");

    printf("area of circle : %f", area);

    return 0;
}

int main1()
{
    printf("\n");
    printf("Enter the number of items to add : ");
    scanf("%d", &num_items);

    if (num_items <= 0)
    {
        printf("Invalid input for number of items.\\n");
        return 1;
    }

    l = (list *)calloc(num_items, sizeof(list));

    if (l == NULL)
    {
        printf("Memory allocation failed! Exiting program.\\n");
        return 1;
    }
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
    for (int i = 0; i < num_items; ++i)
    {
        printf("item : %d\n", l[i].items);
        printf("desc : %s\n", l[i].name);
        printf("mrp : %f\n", l[i].mrp);
    }
}

void read_books()
{
    printf("name : ");
    scanf("%s", b1.name);

    printf("author : ");
    scanf("%s", b1.author);

    printf("price : ");
    scanf("%f", &b1.price);
}

void read_list()
{
    for (int i = 0; i < num_items; ++i)
    {
        printf("ID of the item : ");
        scanf("%d", &l[i].items);

        printf("name of the item : ");
        scanf("%s", l[i].name);

        printf("MRP : ");
        scanf("%f", &l[i].mrp);
    }
}

float circle()
{
    printf("enter radius : ");
    scanf("%f", &r);

    return pi * r * r;
}