// WAP to Print First 10 Natural Number
#include <stdio.h>
int main()
{
    int i = 1;
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("Plz Enter a Non Zero Value");
        return 0;
    }
    while (i <= n)
    {

        printf(" %d ", i++);
    }
    return 0;
}