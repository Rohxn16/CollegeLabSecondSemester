#include <stdio.h>

void print(int n){ // 1
    if(n > 5) return;

    else {
        printf("%d\n",n);
        print(++n);
    }
}

int main(){
    print(1);
}