#include<stdio.h>
int is_prinme(int x){
    int i;
    for(i=2;i<=x/2;i++){
        if(x%i==0)
        return 0;
    }
    return 1;
}

int main(){
    int num;
    printf("Enter  a number ");
    scanf("%d",&num);
    if (is_prinme(num))
    printf("%d is prime\n",num);
    else
    printf("%d is not prime\n",num);
}