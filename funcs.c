#include <stdio.h>

// global variable

int global = 10;

// function declaration (prototype)

void display();
void add(int x, int y); // int x and int y are parameters
int add1(int x, int y);

// main function

int main(int argc, char *argv[])
{

    add(10, 20); // 10,20 are arguments
    display();
    add1(100, 100);
    display();

    return 0;
}

// display function with no parameters

void display()
{
    printf("end of funtion output\n");
}

// add function with no return type

void add(int x, int y)
{
    int result = x + y; // local variable

    printf("sum of %d and %d is : %d\n", x, y, result);
}

// add function with return type

int add1(int x, int y)
{
    int result = x + y; // local variable

    return printf("sum of %d and %d is : %d\n", x, y, result);
}