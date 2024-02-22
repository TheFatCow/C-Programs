#include<stdio.h>
int main()
{
    float i,num;
    printf("Enter a Number");
    scanf("%f",&num);
    for(i=0.001;i*i<num;i=i+0.001);
    
    printf("\n %f",i);
    return 0;
}