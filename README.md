## C Programming

````bash

#Bitwise Operators
BitWise Operator Works on Bits [0 and 1]

& --> BitWise AND
| --> BitWise OR
^ --> BitWise XOR
~ --> BitWise NOT
>> --> BitWise Right Shift
<< --> BitWise Left Shift


Behaviour Of Operator:
-----------------------------------------
# BitWise AND [&]:

0  & 0 -> 0
0  & 1 -> 0
1  & 0 -> 0
1  & 1 -> 1

[Both Operands need to be Truthy Value to Get 1 as Result]

Example:
```c
int main(){

int a ;
a=25 & 72;
printf("%d",a);
return 0 ;


}
**First Convert 25 and 72 in Binary**
25 : 00000000 00000000 00000000 00011001
72 : 00000000 00000000 00000000 01001000
    - - - - - - - - - - - - - - - - - - -
8:   00000000 00000000 00000000 00001000


-----------------------------------------
# BitWise OR [|]:

0  | 0 -> 0
0  | 1 -> 1
1  | 0 -> 1
1  | 1 -> 1

[One of the Operand needs to be True to get 1 as Result]

Example:
```c
int main(){

int a ;
a=25 | 72;
printf("%d",a);
return 0 ;


}
**First Convert 25 and 72 in Binary**
25 : 00000000 00000000 00000000 00011001
72 : 00000000 00000000 00000000 01001000
    - - - - - - - - - - - - - - - - - - -
89:  00000000 00000000 00000000 01011001

-----------------------------------------

# BitWise XOR [^]:

0 ^ 0 -> 0
0 ^ 1 -> 1
1 ^ 0 -> 1
1 ^ 1 -> 0

[IF Both of the Operands are Opposite Then its 1 , IF The Operands are Same then its 0]

Example:
```c
int main(){

int a ;
a=25 ^ 72;
printf("%d",a);
return 0 ;


}
**First Convert 25 and 72 in Binary**
25 : 00000000 00000000 00000000 00011001
72 : 00000000 00000000 00000000 01001000
    - - - - - - - - - - - - - - - - - - -
81:  00000000 00000000 00000000 01010001

-----------------------------------------

# BitWise NOT [~]: Its a Unarry Operator

~0 -> 1
~1 -> 0

[Flip the Bit]


Example:
```c
int main(){

int a ;
a=~25;
printf("%d",a);
return 0 ;


}
**First Convert 25 in Binary**
25 : 00000000 00000000 00000000 00011001
   -------------------------------------
    11111111  11111111 11111111 11100110

-----------------------------------------

# BitWise Right Shift [>>]: Its a Unarry Operator

125>>3

[Shift the Bits to Right 3 times]

Example:
```c
int main(){

int a ;
a=125>>3;
printf("%d",a);
return 0 ;
f

}

125 : 00000000 00000000 00000000 01111101
15  : 00000000 00000000 00000000 00001111
      [Shfted the Bits to Right 3 times]

-----------------------------------------

# BitWise Left Shift [<<]: Its a Unarry Operator

125<<3

[Shift the Bits to Left 3 times]

Example:
```c
int main(){

int a ;
a=125<<3;
printf("%d",a);
return 0 ;


}





```
````
