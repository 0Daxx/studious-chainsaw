#include <stdio.h>

void fn()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *ptr = arr;
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
}

void Array2D(){
    int Matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int *ptr = Matrix[0];
    // printingint* ptr = Matrix[0];int* ptr = Matrix[0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", (*(ptr + i) + j));
            // ptr++;
        }
        printf("\n");
    }
}

int armstrong(int num ){

    int Ognum = num;

    int digitCubeSum = 0;
    while (num)
    {
        int dig = num % 10;
        num /= 10;
        digitCubeSum += dig * dig * dig;
    }
    printf(" Ognum : %d \n   digitCubeSum : %d  \n   ",Ognum , digitCubeSum);

}


int main()
{

    // fn();
    // Array2D();
    armstrong(153);
    // some armstrong numbers are 153, 370, 371, 407

    return 0;
}

// Array
/*
An array is a data structure that stores a collection of elements of the same data type in contiguous memory locations, allowing for efficient access and manipulation of these elements using indices (subscript )
*/

// String
/*
1. terminates by Null character

arrays of char


gets puts in STRing
difference between char and string
difference in scanf and gets
PUTS VS printf

Q how to modify string


*/




// IMP for Viva
/*


- 3 key differences b/w struct and union
    1. In structure each member has its own memory space whereas in union all members share the same memory space
    2. Structure members can be initialized at the time of declaration but union members can not be initialized at the time of declaration
    3. In structure we can assign different values to different members but in union, if we assign a value to one member, all other members will have the same value


*/