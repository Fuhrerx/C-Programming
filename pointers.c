#include <stdio.h>

int main(int argc, char *argv[])
{
    // declaration of a pointer

    int *ptr;

    // assign a normal variable to a pointers

    int a = 27;

    ptr = &a;

    // reference and dereference operators

    int age = 10;
    int *ageptr = &age;

    printf("%d\n", age);
    printf("%d\n", &age);
    printf("%d\n", *&age);

    // pointer arethemetic

    int no = 10;
    int *noptr = &no;

    printf("pointers original address : %u\n", noptr);

    noptr = noptr + 1;

    printf("pointers address after incriment : %u\n", noptr);

    noptr = noptr - 1;

    printf("pointers address after decriment : %u\n", noptr);

    noptr = noptr + 3;

    printf("pointers address after add : %u\n", noptr);

    noptr = noptr - 3;

    printf("pointers address after sub : %u\n", noptr);

    return 0;
}