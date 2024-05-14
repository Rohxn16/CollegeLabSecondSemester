// check perfect number

#include <stdio.h>

int isPerfect(int n){
    int sum = 0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum += i;
        }
    }
    if(sum==n){
        return 1;
    }
    return 0;
}

int main(){
    
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);

    if(isPerfect(n)){
        printf("%d is a perfect number\n", n);
    }else{
        printf("%d is not a perfect number\n", n);
    }
}