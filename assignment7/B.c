// gcd of 2 nums in a recursive function

#include <stdio.h>

int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b, a%b);
}


int main(){
    
    printf("Enter 2 numbers: ");
    int a, b;
    scanf("%d %d", &a, &b);

    printf("GCD of %d and %d is %d\n", a, b, gcd(a, b));
}