// size of pointer depends on architechture
#include <stdio.h>

int main(int argc, char const *argv[]){
    int a;
    scanf("%d",&a);
    int *ptra = &a; //stores the address of a
    int **pptra = &ptra;
    printf("The value of a is : %d\n",a); // 
    printf("Address of a is %p\n",&a); // this prints what ptr stores, which is the address of variable a
    printf("The val of the a's address is %p\n",ptra); // this directly prints the address by 
    printf("The vlaue of a is %d\n",*ptra); // dereferencing pointer
    printf("The value of the address of ptra is %p\n",pptra);

    // dereferencing pointers

    return 0;
}