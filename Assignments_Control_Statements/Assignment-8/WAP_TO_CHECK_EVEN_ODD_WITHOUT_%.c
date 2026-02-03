//WAP Program to Check Even Odd Without Modulo[%]
#include <stdio.h>
int main()
{

    int x = 11;
    while (x > 1)
    {
        x -= 2;
    }

    if (x == 0)
        printf("Even");
    else
        printf("Odd");

    return 0;
}