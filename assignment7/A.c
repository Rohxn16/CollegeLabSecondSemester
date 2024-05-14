#include <stdio.h>

int main(){
    
    printf("Enter 2 numbers: ");
    int a, b;
    scanf("%d %d", &a, &b);

    // display fibonacci within that range
    int fib1 = 0, fib2 = 1, fib3 = 0;

    for(fib1=0;fib1<=a;fib1++){

    // update fib 1 until it becomes a
    fib3 = fib1 + fib2;
    fib1 = fib2;
    fib2 = fib3;

    }

    // display fibonacci within that range
    while(fib1<=b){
        printf("%d ", fib1);
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
    }
}