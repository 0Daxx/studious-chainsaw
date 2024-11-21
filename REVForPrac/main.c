#include <stdio.h>

#include <limits.h> // to use int max 
#include <stdlib.h>


#define pi 3.14592

// macro fn is just a fn defined with 1 return value 
#define area(r) (pi * r *r)


int prog1(){

    int x = INT_MAX;
    long y = INT_MAX;
    printf("%d \n",x);
    printf("%ld \n",y );


    return 0;
}

int are(){

    printf("%f \n",area(6));
    return 0;
}

int numericWords(int n ){

    switch (n)
    {
    case 1:
        printf("One \n");
        break;
    case 2:
        printf("Two \n");
        break;
    case 3:
        printf("Three \n");
        break;
    
    default:
        // in none of the case is matched this works
        printf("error , must be wrong input \n");
        break;
    }
}

int calc(int a , int b ){

    int cho ;
    printf("Enter the operand you want \n 1 -> + \n 2 -> - \n " );
    scanf("%d", &cho);
    switch (cho)
    {
    case 1 :
        printf("%d + %d = %d ", a , b , a + b );
        break;
    case 2 :
        printf("%d - %d = %d ", a , b , a - b );
    default:
        break;
    }

    return 0;
}

void dynamic(){

    int* ptr = (int *) malloc(100 * sizeof(int));
    int* ptr1 = (int *) malloc(100 * 4); // cuz we know int = 4 

    /*calloc initialise all allocated memory with 0 unlike malloc in which blocks have garbae value */

    float* ptr2 = (float *) calloc(50 , sizeof(float));
    ptr2++;
    printf("%d ",*ptr2);
}   

int nNumberOfInput(int n ){


    int* ptr = (int*) malloc(n * sizeof(int));
    int* p = ptr ;
    
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&(*ptr));
        ptr++;
    }
    int* t = p ;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",(*p));
        p++;
    }
    
    // memory deallocate 
    free(ptr);
    // memory deallocated but ptr refers to a memory which now doesnt bleong to us hence ptr ( dangling pointer ) should be set to NULL ;
    ptr = NULL;
}

void frii(){

    int* ptr = (int*) calloc(10,4);
    // ptr++;

    // free(ptr); //ERROR  :pointer being free wasnt allocated .   so to avoid this 
    int* p = ptr ;
    p++;
    // free(ptr );  // FINE 
    //  or WAY 2    
    ptr++;
    free(p);
}

void reallocation(){


    int* ptr = (int * ) malloc(10 * sizeof(int));  // typecasting by (int* ) is a good practice 
    printf("Add : %p \n",ptr);
    ptr = realloc(ptr, 30 * sizeof(int));
    printf("Add : %p \n",ptr);

}


int main(){

    // prog1();
    // are();
    // numericWords(2);
    // calc(6,5);
    // dynamic();
    // nNumberOfInput(6);
    reallocation();
    return  0;  
}