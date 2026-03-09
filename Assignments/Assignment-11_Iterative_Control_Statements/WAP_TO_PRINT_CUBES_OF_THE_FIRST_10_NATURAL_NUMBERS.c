#include <stdio.h>

int main()
{
    int qub = 0;
    int n = 10;
    while (n)
    {

        qub = n * n * n;
        printf(" %d ", qub);

        n--;
    }
    return 0;
}