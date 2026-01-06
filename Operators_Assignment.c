// WAP to Calculate size of a charachter constant
// #include <stdio.h>
// int main()
// {

//     char constant = 't';
//     size_t size = sizeof(constant);

//     printf("The size of Character Constant: %zu", size);
//     return 0;

//     // size_t is used to hold the result  returned by the  sizeof() method
//     //%zu is used to print the value of size_t variable
// }

// WAP to Calculate size of a real constant

// #include <stdio.h>
// int main()
// {

//     float constant = 4.0;
//     size_t size = sizeof(constant);

//     printf("The size of Real Constant: %zu", size);
//     return 0;
//     // size_t is used to hold the result  returned by the  sizeof() method
//     //%zu is used to print the value of size_t variable
// }

// WAP to with one char type Variable.Assign 'A' in the Variable. Now Change the  Value of variable from 'A' to 'B' using increment Operator

// #include <stdio.h>
// int main()
// {

//     char value = 'A';
//     int Converted_Value = (int)value;
//     value = (char)++Converted_Value;

//     printf("Incremented Value:%c", value);
//     return 0;

//     // Type Convertion With (int),(char)..
// }

// WAP to Swap two variable without using 3rd variable

#include <stdio.h>
int main()
{

    int a, b;
    a = 20;
    b = 10;
    // a=20+10=30
    a = a + b; // Now a is 30

    // b=30-10=20
    b = a - b; // Now b is 20

    // a=30-20=10
    a = a - b; // Now a is 10
    printf("a = %d, b = %d", a, b);
    return 0;
}