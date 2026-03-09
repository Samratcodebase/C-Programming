// WAP TO PRINT FIRST NATURAL NUMBERS IN REVERSE ORDER

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d", &n);
    while (n)
    {
        printf(" %d ", n);
        n--;
    }
    return 0;
}