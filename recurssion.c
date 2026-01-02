#include <stdio.h>

int no;

int factorial(int n);
void display();

int main(int argc, char *argv[])
{
    long long fact;

    display();
    fact = factorial(no);
    printf("factorial of %d is : %lld", no, fact);
    return 0;
}

int factorial(int n)
{
    if (n <= 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

void display()
{
    printf("enter a number : ");
    scanf("%d", &no);
}