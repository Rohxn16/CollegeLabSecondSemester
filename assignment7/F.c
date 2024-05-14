#include <stdio.h>

//check for strong number

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int isStrong(int n){
    int sum = 0;
    int temp = n;
    while(n>0){
        sum += factorial(n%10);
        n /= 10;
    }
    if(sum==temp){
        return 1;
    }
    return 0;
}

int main(){
    
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);

    if(isStrong(n)){
        printf("%d is a strong number\n", n);
    }else{
        printf("%d is not a strong number\n", n);
    }
}
// Compare this snippet from assignment7/B.c:
