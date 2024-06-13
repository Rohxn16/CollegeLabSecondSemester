#include <stdio.h>
#include <stdlib.h>

int add(int *a, int *b){
    return *a + *b;
}

void main(){
    int a = 10;
    int* p;
    p = &a;

    printf("%d\n", *p);

    int x,y;
    x = 10;
    y = 20;
    int sum = add(&x,&y);
    printf("The sum is %d\n",sum);
}