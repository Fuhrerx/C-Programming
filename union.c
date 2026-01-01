#include <stdio.h>

// union declaration and definition

typedef union
{
    int s_no;
    char book[20];
    char author[25];
    float price;
} books;

// global union declartaion

books b1;

void read_books();
void display_books();

int main(int argc, char *argv)
{

    printf("\nenter the details of the book : \n");
    read_books();
    printf("\nbooks list : \n");
    display_books();

    return 0;
}

void read_books()
{
    printf("serial no : ");
    scanf("%d", b1.s_no);

    printf("name of the book : ");
    scanf("%s", b1.book);

    printf("name of the book author : ");
    scanf("%s", b1.author);

    printf("price of the book : ");
    scanf("%f", b1.price);
}

void display_books()
{
    printf("serial no : %d", b1.s_no);
    printf("book name : %s", b1.book);
    printf("author name : %s", b1.author);
    printf("price : %f", b1.price);
}