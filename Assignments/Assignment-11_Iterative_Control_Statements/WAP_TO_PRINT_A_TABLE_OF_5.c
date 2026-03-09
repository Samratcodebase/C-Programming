#include <stdio.h>
int main()
{
    int value = 0;
    int n = 5;
    int i = 1;
    while (i <= 10)

    {
        value = n * i;
        printf("%d x %d = %d\n", n, i, value);

        /* code */
        i++;
    }
    return 0;
}
