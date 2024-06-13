#include <stdio.h>

int main(){
    // try to use goto statement lesser, but in case of breaking multiple loops to be broken at once with a single statement goto is preferred
    // label:
    //     printf("Hello, World\n");
    //     goto end;
    // printf("Hello, outside label\n");
    // goto label;

    // end:
    //     printf("End of the program\n");

    int x;
    for(int i = 0; i < 10; i++){
        printf("i = %d\n", i);

        for(int j = 0; j < 10; j++){
            printf("Enter a number or enter 0 to exit\n");
            scanf("%d", &x);
            if(x == 0){
                goto end;
            }else{
                printf("x = %d\n", x);
            }
        }
    }

    end:
        printf("End of the program\n");

    return 0;


}