
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
        
        printf("Enter a number: ");
        int n;
        scanf("%d", &n);
    
        int sum = 0;
        int temp = n;
        while(n>0){
            sum += factorial(n%10);
            n /= 10;
        }
        if(sum==temp){
            printf("%d is a strong number\n", temp);
        }else{
            printf("%d is not a strong number\n", temp);
        }
}