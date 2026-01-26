#include <stdio.h>
int main()
{
    int value = 1210;
    int Res = value % 10;
    printf("%d", Res);
        value = value - Res;
    printf("%d", value);
}