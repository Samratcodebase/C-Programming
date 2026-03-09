// Write  a Program to print the First N odd Numbers
#include <stdio.h>
int main()
{
    int n = 10;
    while (n)
    {
        if (n % 2 == !0)
        {
            printf(" %d ", n);
        }
        /* code */
        n--;
    }
    return 0;
}