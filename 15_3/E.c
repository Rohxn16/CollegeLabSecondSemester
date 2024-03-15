#include <stdio.h>

int main(){
        
        int a,b;
        printf("Enter 2 numbers to swap them : \n");
        scanf("%d %d",&a,&b);
        printf("a = %d , b = %d\n",a,b);
	a = a + b;
	b = a - b;
	a = a - b;
        printf("The swapped values of the variables are : \n");
        printf("a = %d, b = %d\n",a,b);

return 0;
}
