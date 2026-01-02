#include <stdio.h>

int main(int argc, char *argv[])
{
    int x;
    int y;

    printf("enter the first no : ");
    scanf("%d", &x);

    printf("enter the second no : ");
    scanf("%d", &y);

    // arethemetic

    printf("sum : %d\n", x + y);
    printf("diff : %d\n", x - y);
    printf("prod : %d\n", x * y);
    printf("div : %d\n", x / y);
    printf("modulo : %d\n", x % y);

    // assignment

    int a = 5;
    printf("assignment : %d\n", &a);

    // arethemetic assignment

    printf("sum : %d\n", x += y);
    printf("diff : %d\n", x -= y);
    printf("prod : %d\n", x *= y);
    printf("div : %d\n", x /= y);
    printf("modulo : %d\n", x %= y);

    // relational

    printf("\n0 - false\n1 - true\n");
    printf("is %d greater than %d : %d\n", x, y, x > y);
    printf("is %d less than %d : %d\n", x, y, x < y);
    printf("is %d equal to %d : %d\n", x, y, x == y);
    printf("is %d not equal to %d : %d\n", x, y, x != y);
    printf("is %d greater than or equal to %d : %d\n", x, y, x >= y);
    printf("is %d less than or equal to %d : %d\n", x, y, x >= y);

    // logical

    printf("\n0 - false\n1 - true\n");
    printf("x AND y : %d\n", x && y);
    printf("x OR y : %d\n", x || y);
    printf("x NOT : %d\n", !x);
    printf("y NOT : %d\n", !y);

    // incriment/decriment

    printf("pre incriment : %d\n", x++);
    printf("post incriment : %d\n", ++x);
    printf("pre decriment : %d\n", x--);
    printf("post decriment : %d\n", --x);

    // operator precidence

    printf("the first equation : (x+y)*x\n");
    printf("the second equation : x+y*y\n");
    int result1 = (x + y) * x;
    int result2 = x + y * x;
    printf("result of first equation : %d\n", result1);
    printf("result of second equation : %d\n", result2);

    return 0;
}