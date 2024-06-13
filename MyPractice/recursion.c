#include <stdio.h>

int printFactorial(int n);

int main(int argc, char const *argv[]){

    int n;
    printf("Enter a number to check factorial\n");
    scanf("%d",&n);
    int fact = printFactorial(n);
    printf("The factorial of the number %d is %d\n",n,fact);
    return 0;
}

int printFactorial(int n){
    if(n == 1 || n == 0) return 1;
    else return printFactorial(n-1) * n;
}