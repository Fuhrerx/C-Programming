#include <stdio.h>
#include "extren.c"

int main()
{
    // auto class (default)
    auto int no = 5;

    // static class
    static int a = 5;

    // register class
    register int nos = 5;

    // extern class
    extern int q;

    // demo
    printf("auto : %d", no);
    printf("static : %d", a);
    printf("register : %d", nos);
    printf("extern : %d", q);
}