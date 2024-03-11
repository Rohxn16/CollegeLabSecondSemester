#include <stdio.h>
int main(){
	int a,b,c,d,e;
	printf("Enter 5 integers : \n");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	int avg = (a+b+c+d+e)/5;
	printf("The average of the 5 numbers is : %d\n",avg);
}
