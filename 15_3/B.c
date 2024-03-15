#include <stdio.h>

int main(){
        int n;
        printf("Enter the number you wanna check : ");
        scanf("%d",&n);
	if(n % 2 == 0) printf("%d is an EVEN number\n",n);
	else printf(" %d is an ODD number\n",n);

return 0;
}
