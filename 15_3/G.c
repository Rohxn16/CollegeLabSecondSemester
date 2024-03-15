#include <stdio.h>
int main(){
	int age;
	printf("Enter age to check \n");
	scanf("%d", &age);
	if(age<18) printf("Minor\n");
	else if(age >= 18 && age < 60) printf("Adult\n");
	else printf("Senior Citizen\n");
}
