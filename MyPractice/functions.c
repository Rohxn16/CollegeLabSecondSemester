#include <stdio.h>

void printHello();
int add(int a, int b);
int main(int argc, char const *argv[]){
    printHello();
    int a,b;
    scanf("%d %d",&a,&b);
    printf("The sum of %d and %d is %d\n",a,b,a+b);
    return 0;
}


void printHello(){
    printf("Hello, world!\n");
}

int add(int a, int b){
    return a+b;
}