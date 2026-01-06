/*
Arithmetic Instruction
----------------------
An instruction which is used to manipulate data using operators, is known as Arithmetic Instruction

3+4

3 and 4 are operands/data
+ operator

    3+4*5
1) 3+4*5
    7*5
    35  Wrong
2) 3+4*5
    3+20
    23  Correct

    BODMAS

Types of operators
------------------
1) Unary Operators
2) Arithmetic Operators
3) Bitwise Operators
4) Relational Operators
5) Logical Operators
6) Conditional Operator
7) Assignment Operators

Types of Operators on the basis of number of operands

Unary   1 Operand
Binary  2 Operands
Ternary 3 Operands

*/

/*
Unary Operators
---------------
+, -, ++, --, sizeof

+5  Unary +
-4  Unary -
++ increment operator
-- decrement operator

int x=5;
printf("%d",x); //5
x++;    //x=x+1     | Post-increment
printf("%d",x); //6
++x;    //x=x+1     | Pre-increment
printf("%d",x); //7

x--;    //x=x-1 |   post-decrement
--x;    //x=x-1 |   pre-decrement




#include<stdio.h>
int main()
{
    int x=5,y;  // x=5, y=garbage
    y=x++;      // x=6, y=5
    printf("%d %d",x,y);    // 6 5
    printf("\n");
    return 0;
}

#include<stdio.h>
int main()
{
    int x=5,y;  // x=5, y=garbage
    y=++x;      // x=6, y=6
    printf("%d %d",x,y);    // 6 6
    printf("\n");
    return 0;
}
    */

/*
    sizeof( ? )
    1) data type
    2) variable
    3) constant

     integer constant    --> int
     character constant  --> int
     Real Constant       --> double

#include<stdio.h>
int main()
{
    int y;  
    y=sizeof(4.5);
    printf("%d",y);    // 4
    printf("\n");
    return 0;
}
*/

/*
Arithmetic Operators
--------------------

* / %
+ -

a+b*c   *, +
a*b/c   *, /
a/b*c   /, *

3+4 7
3-4 -1
3*4 12
3/4 0

Integer operator Integer = Integer

3.0/4   0.75
3/4.0   0.75
3.0/4.0 0.75

345/10  34

25%7    4
32%5    2
3%4     3
123%10  3


*/