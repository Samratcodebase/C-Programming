// WAP to Check Weather a Given Number is 3 digit Or not
#include <stdio.h>
#include <string.h>
int main()
{

    int number = 12;
    printf("Enter a number:");
    scanf("%d", &number);
    char str[20];

    // Converting Number to String
    sprintf(str, "%d", number);

    // Length Check // Debugging
    printf("The Length is %zu\n", strlen(str));

    if (strlen(str) > 3)
    {
        printf("Its 3 Digit");
    }
    else
    {
        printf("Not 3 Digit");
    }
}
