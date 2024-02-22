#include <stdio.h>
int main()
{
    int N;
    int small,pos;
    printf("Enter the size of array: ");
    scanf("%d", &N);   
    int roll_no[N];
    for (int i=0; i<N; i++){
    printf("Enter %dst values in the array: \n", i);
    scanf("%d",&roll_no[i]);
    }
    small=roll_no[0];
    pos=0;
    for(int i=0; i<N; i++){
        if(small>roll_no[i]){
            small=roll_no[i];
            pos=i;
        }
    }
    printf("Smallest value in the array is %d found at poistion %d: ",small,pos+1);

}
    