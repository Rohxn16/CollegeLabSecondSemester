#include <stdio.h>

int main(){
	
	int a,b,temp;
	printf("Enter 2 numbers to swap them : \n");
	scanf("%d %d",&a,&b);
	printf("a = %d , b = %d\n",a,b);
	temp = a;
	a = b;
	b = temp;
	printf("The swapped values of the variables are : \n");
	printf("a = %d, b = %d\n",a,b);

return 0;
}
