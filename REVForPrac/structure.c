#include <stdio.h>

void fn(){



}


typedef struct Student{

    char name[20];
    int rollNo;
    float marks;
    char Subject[20];


}Student ;

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int nthPrime(int n) {
    int count = 0;
    int num = 2;
    while (true) {
        if (isPrime(num)) {
            count++;
            if (count == n) return num;
        }
        num++;
    }
}

int main(){


    // fn();
    Student saurav = { "SauravSharma" , 1 , 80.5 , "Maths"};

    // saurav.marks = 89.5;
    // printf(" saurav marks : %f  \n   ",saurav.marks);
    // printf(" saurav name : %0.2f  \n   ",saurav.name);


    // print till nth prime , fibo


    

    return 0;
}