#include <stdio.h>
#include <stdlib.h>
#include "header.h"

FIRST 
unsigned int factoryRecursion(int n){
    if (n < 0){
        return 0;
    }

    if (n == 0 || n == 1){
        return 1;
    }

    return n*factoryRecursion(n-1);
}

unsigned int factoryIteration(int n){
    if (n < 0){
        return 0;
    }

    int factorial = 1;

    while (n > 1){
            factorial = factorial*n;
            n--;
    }
    return factorial;
}

unsigned int fibonacciRecursion(unsigned int n){
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }

    return fibonacciRecursion(n-1)+fibonacciRecursion(n-2);
}

void swap(int *a, int *b){
    int tmp = 0;
    tmp = a;
    a = b;
    b = tmp;
}

unsigned int fibonaciiIteration(unsigned int n){
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }

    int result = 1;
    int tmp = 1;
    unsigned int i;
    for(i = 0; i < n - 2; i++){
        swap(&tmp, &result);
        result +=tmp;
    }
    return result;
}
int main()
{
    printf("Hello world!\n");
    printf("First string: %s and second: %s \n", "first", "another");
    printf("Integer is: %d \n", 2);
    float f = 4.7;
    printf("Float is: %f \n", f);
    printf("Sizeof(f) = %u \n",sizeof(f));

    printf("Test factory \n");
    printf("Factorial(-1) = %d or it is %d \n", factoryRecursion(-1), factoryIteration(-1));
    printf("Factorial(1) = %d or it is %d \n", factoryRecursion(1), factoryIteration(1));
    printf("Factorial(5) = %d or it is %d \n", factoryRecursion(5), factoryIteration(5));
    printf("Factorial(6) = %d or it is %d \n", factoryRecursion(6), factoryIteration(6));

    printf("Test fibonacci \n");
    printf("Fibonacci(1)= %d or it is %d\n", fibonacciRecursion(1), fibonaciiIteration(1));
    printf("Fibonacci(2)= %d or it is %d\n", fibonacciRecursion(2), fibonaciiIteration(2));
    printf("Fibonacci(3)= %d or it is %d\n", fibonacciRecursion(3), fibonaciiIteration(3));
    printf("Fibonacci(4)= %d or it is %d\n", fibonacciRecursion(4), fibonaciiIteration(4));
    return 0;
}
