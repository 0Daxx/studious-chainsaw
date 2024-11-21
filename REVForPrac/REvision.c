#include <stdio.h>

void fn(){

    int num = 10;
    float x = 5.0;
    printf(" 10 / 5.0  = %f   \n   ",10 / 5.0);
    printf(" 10 / 5.0  = %d   \n   ",10 / 5.0);
    printf(" 10.0 / 5  = %d   \n   ",10.0 / 5);
    printf(" 10.0 / 5  = %f   \n   ",10.0 / 5);

    printf(" 3.0 / 8 -2  = %f   \n   ",3.0 / 8 - 2 );

}

int factorial(int n ){
    if (n <= 1 ) return 1 ;

    return n * factorial(n-1);
}

int sum (int n , int n3);

int main(){

    // fn();
    // sum(5,6);

    printf(" 5! = %d   \n   ",factorial(5));

    // factorial(5);
    return 0;
}

// pointers
int pointer(){
    int balance = 45000;
    int* ptr = &balance;
    printf("address of balance : %p \n",ptr);
    printf("value of balance : %d \n",*ptr);


}


int sum ( int n , int n2 ){
    printf("sum : %d \n", n + n2);
    return n + n2;
}

/*
ch1
variable is a container used to store value of different types of data

int num = 10; // declaration and initialization of an integer variable

What are keyword
=> reserved words whose meaning is already known to compiler

what are constants

=> values that are not changeable



compiler converts C program into machine language


what are library functions
commonly req libraries are stdio.h , stdlib.h

UDF - declared and define by user

*/

/*
ch 2
Arithmetic operations
- left to right , ( except power , which is righ to left )
precedence :


those Questions



Conversions

type casting
    implicit
    explicit


control instructions
determine flow of control

*/


// ch3
/*
1. operator precedence


switch : when we have defined alternatives values

=>  once a case is matched all the cases after that are also considered true hence use break statement

Why loop not fn

cuz in loop the set of instructions must be run until the condition is true

=> iterator

=> pre post increment

-----
jump statements
break , continue


*/

// FN
/*
helps in breaking a bigger code into smaller chunks and Also reuse them

=> performs a specific task

function prototype

*/

// Recursion
/*
base call : condition which terminates the recursion by not calling the fn again*/

// Pointer
/*
& operator - reference operator : for obtaining add of variable

* operator - dereference operator


=}
- Format specifiers are used to specify the type of a variable in a formatted string.
- Examples: %d for integers, %f for floats, %c for characters, %s for strings.
=} Format specifiers like %d and %f

double pointer : store address of a pointer that points to a variable
int**
*/


// Arrays


