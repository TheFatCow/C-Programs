#include<stdio.h>
#include<conio.h>
int main() {
    int ch, a, b;
    float res;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    printf("1=Add \n2=Sub \n3=Mul \n4=Div \n5=Rem\n");
    printf("Enter your choice: \n");
    scanf("%d", &ch);
    switch(ch) {
        case 1: 
            res = a + b;
            break;
        case 2: 
            res = a - b;
            break;
        case 3: 
            res = a * b;
            break;
        case 4: 
            res = (float) a / b;
            break;
        case 5: 
            res = a % b;
            break;
        default: 
            printf("Entered Wrong Choice\n");
    }
    printf("Result= %.2f\n", res);
    return 0;
}
