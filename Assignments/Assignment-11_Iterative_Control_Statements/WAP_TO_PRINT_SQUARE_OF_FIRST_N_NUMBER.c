#include <stdio.h>

int main()
{
    int sqr = 0;
    int n = 10;
    while (n)
    {
        if (n % 2 == !0)
        {
            sqr = n * n;
            printf(" %d ", sqr);
        }
        /* code */
        n--;
    }
    return 0;
}