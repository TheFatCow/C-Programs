#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
int n;
float sqrt, temp;
printf("Enter a value whose square root has to be calculated\n");
scanf("%d",&n);
if(n<=0)
{
printf("Sqrt cannot be determined");
exit(0);
}
sqrt = n / 2;
temp = 0;
while(sqrt != temp)
{
temp = sqrt;
sqrt = ( n/temp + temp) / 2;
}
printf("The square root of %d is %f", n, sqrt);
}