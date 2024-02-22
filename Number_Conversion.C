// #include<stdio.h>

// int main()
// {
//     int i = 20;
//     printf(" i = %d\n i = %o\ni = %x\n" ,i,i,i);
// }

// #include<stdio.h>

// int main()
// {
//     int m[]={1,2,3,4,5};
//     int x=0,y=0;
//     while(x<5)
//     {
//         y = y + m[x];
//         x++;
//     } 
//     printf("%d ",y);
// }

// #include<Stdio.h>
// int main( )
// {
// int i = 10;
// int  *p = &i;
// printf("%d\n", *p);
// return 0;
// }

// #include <stdio.h>

// struct Solar_System {
//     char name[20];
//     float distance;
//     int no_of_moon; 
// };

// int main( )
// {
//     struct Solar_System mercury ={"Mercury",149.23,0};
//     struct Solar_System venus ={"Venus",175.11,0};
//     struct Solar_System earth ={"Earth",252.22,1};
//     struct Solar_System Mars ={"Mars",363.49,2};

//     // Till the eighth planet

//     printf("Planet : %s\nDistance : %f\nNo. of moons : %d\n\n",mercury.name,mercury.distance,mercury.no_of_moon);
//     printf("Planet : %s\nDistance : %f\nNo. of moons : %d\n\n",venus.name,venus.distance,venus.no_of_moon);
//     printf("Planet : %s\nDistance : %f\nNo. of moons : %d\n\n",earth.name,earth.distance,earth.no_of_moon);
//     printf("Planet : %s\nDistance : %f\nNo. of moons : %d\n\n",Mars.name,Mars.distance,Mars.no_of_moon);

//     return 0;

// }

// #include<stdio.h>
// int main()
// {
//     int resp,result,num1,num2;
//     printf("Enter 1 for arthematic sum\n2 for bitwise or\n3 for bitwise and\n");
//     scanf("%d",&resp);

//     printf("Enter first number\n");
//     scanf("%d",&num1);
//     printf("Enter second number\n");
//     scanf("%d",&num2);
//     switch (resp)
//     {
//     case 1:
//         result = num1+num2;
//         printf("Sum = %d\n",result);
//         break;
//     case 2:
//         result = num1 | num2;
//         printf("Result of %d | %d is %d \n",num1,num2,result);
//         break;

//     case 3:
//         result = num1 & num2;
//         printf("Result of %d & %d is %d",num1,num2,result);
//         break;

//     default:
//         printf("Invalid Input try again");

//         break;
//     }

// }

#include<stdio.h>

int main()
{
    int result=0,number,digit=0;

    printf("Enter a number less than six digits\n");
    scanf("%d",&number);

    if(number>=0 && number <= 99999)
    {
        while(number > 0)
        {
            digit = number % 10;
            result = result + digit;
            number = number/10;
        }

        printf("Sum = %d \n",result);   
    }
    else {
        printf("Worng Input, try again\n");
    }
    return 0;
}
