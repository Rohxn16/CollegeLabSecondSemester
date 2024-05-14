#include <stdio.h>

// lcm function recusive

int lcm(int a, int b){
    static int multiple = 0;
    multiple += b;
    if(multiple % a == 0){
        return multiple;
    }
    return lcm(a, b);
}

int main(){
    
    printf("Enter 2 numbers: ");
    int a, b;
    scanf("%d %d", &a, &b);

    printf("LCM of %d and %d is %d\n", a, b, lcm(a, b));
}