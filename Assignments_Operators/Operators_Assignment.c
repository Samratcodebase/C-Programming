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

// #include <stdio.h>
// int main()
// {

//     int a, b;
//     a = 20;
//     b = 10;
//     // a=20+10=30
//     a = a + b; // Now a is 30

//     // b=30-10=20
//     b = a - b; // Now b is 20

//     // a=30-20=10
//     a = a - b; // Now a is 10
//     printf("a = %d, b = %d", a, b);
//     return 0;
// }

// WAP to input a three Digit Number and Display the Sum of Digit

// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     printf("Enter Three Numbers:-");
//     scanf("%d %d %d", &a, &b, &c);
//     int sum = a + b + c;
//     printf("Here You Go %d", sum);
// }

// WAP TO Find the ASCII Code of the character "+"

//  #include <stdio.h>

// int main() {
//     char ch = '+';

//     printf("ASCII value: %d\n", ch);

//     return 0;
// }

// WAP to print the size of int , float , char , double

// #include <stdio.h>
// int main()
// {
//     int a = 12;
//     float b = 12.2;
//     char c = 's';
//     double d = 12111.1234;

//     size_t sizeOfInterger = sizeof(a);
//     size_t sizeOfFloat = sizeof(b);
//     size_t sizeOfChar = sizeof(c);
//     size_t sizeOfdouble = sizeof(d);
//     printf("The Size of Interger : %d\n", sizeOfInterger);
//     printf("The Size of Float : %d\n", sizeOfFloat);
//     printf("The Size of Character : %d\n", sizeOfChar);
//     printf("The Size of Double: %d\n", sizeOfdouble);
//     return 0;
// }

// wap to make the last Digit of the number stored in a variable as zero
//[Example if x =2345 THEN make it x=2340]

// #include <stdio.h>
// int main()
// {
//     int x;
//     printf("Enter a Number:-");
//     scanf("%d", &x);
//     x /= 10;
//     x*=10;
//     printf("Result %d", x);
// }

// WAP to input a number from the user and also input a digit . Append a Digit in the number and print the resulting number.
// Example:Number=234 and Digit=9 then the resulting number is 2349

// #include <stdio.h>
// int main()
// {
//     int number, digit;
//     printf("Enter a Number:-");
//     scanf("%d", &number);
//     printf("Enter a Digit:-");
//     scanf("%d", &digit);
//     if (digit <= 9)
//     {
//         number *= 10;

//         number += digit;
//         printf("%d", number);
//         return 0;
//     }
//     else
//     {
//         printf("Enter a Digit not A number");
//     }
//     return 0;
// }

// Assume Price of 1 USD is INR 84.23 , WAP to take the amount in USD and Convert it into INR
/*
  INR/USD

*/

// #include <stdio.h>
// int main()
// {
//     float USD = 90.15;
//     float INR;
//     printf("Enter INR:");
//     scanf("%f", &INR);
//     USD = INR / USD;

//     printf("INR TO USD  %.2f", USD);
//     /*
//     Controlling digits AFTER the decimal (the correct way)

//     control this when printing, using printf.

//     Example : 2 digits after decimal
//             Printf("%.2f\n", c);

//     General form
//         printf("%.<N>f", value);
//   */
// }