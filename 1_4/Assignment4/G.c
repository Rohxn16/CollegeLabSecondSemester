#include <stdio.h>


int main(int argc, char const *argv[])
{
    //print all primes upto 100

    for(int i = 0; i < 100; i++){
        int isPrime = 1;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            printf("%d\n", i);
        }
    }

    return 0;
}
