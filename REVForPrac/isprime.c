#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}


void printFibonacci(int num) {
    int a = 0, b = 1, next;
    while (a <= num) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;

    }
}


void printNthFibbo(int num){

    int a = 0 , b =1 , next;


    while (a < num){
        printf(" %d ",a);
        next = a + b ;
        a = b;
        b = next;
    }

}

void printPascalTriangle(int n) {
    int i, j, k, space;
    for (i = 0; i < n; i++) {
        // print leading spaces
        for (space = 0; space < n - i - 1; space++) {
            printf(" ");
        }
        // print numbers
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                printf("1 ");
            } else {
                printf("%d ", (i - 1) * (j - 1) / (j));
            }
        }
        printf("\n");
    }
}


int main() {
    // int n;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // printf("Prime numbers less than %d are:\n", n);
    // for (int i = 2; i < n; i++) {
    //     if (isPrime(i)) {
    //         printf("%d ", i);
    //     }
    // }
    // printf("\n");


        // int n = 100;
        // printf("Fibonacci numbers up to %d: ", n);
        // printNthFibbo(n);


    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printPascalTriangle(n);
    return 0;
}