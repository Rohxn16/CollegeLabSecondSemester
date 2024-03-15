#include <stdio.h>

int main(){
	int a;
	int b;
	int c;
	printf("Enter 3 numbers to find the biggest one among them\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);

	int max;
	int temp;

	if(a > b){
		temp = a;
	}else{
		temp = b;
	}

	if(temp > c){
		max = temp;
	}else{
		max = c;
	}

	printf("The maximum number is : %d \n",max);
}
