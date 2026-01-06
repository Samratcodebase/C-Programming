// WAP to Calculate size of a charachter constant
#include <stdio.h>
int main()
{

    char constant = 't';
    size_t size = sizeof(constant);

    printf("The size of Character Constant: %zu", size);
    return 0;

    // size_t is used to hold the result  returned by the  sizeof() method
    //%zu is used to print the value of size_t variable
}

// WAP to Calculate size of a real constant

#include <stdio.h>
int main()
{

    float constant = 4.0;
    size_t size = sizeof(constant);

    printf("The size of Real Constant: %zu", size);
    return 0;
    // size_t is used to hold the result  returned by the  sizeof() method
    //%zu is used to print the value of size_t variable
}