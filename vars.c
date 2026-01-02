#include <stdio.h>

int main(int argc, char *argv[])
{
    // integers
    short int a;     // 1 byte
    int b;           // 2 bytes
    long int c;      // 4 bytes
    long long int d; // 8 bytes

    // floating points
    float x;       // 4 bytes
    double y;      // 8 bytes
    long double z; // 10 bytes

    // charaters
    char q;            // 1 byte
    char w[sizeof(q)]; // depends on side of variable q (1 char = 1 byte)

    return 0;
}