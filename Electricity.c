#include <stdio.h>
void main()
{
    char name[10];
    float unit, amt;
    printf("Enter you name and uint consumed:");
    scanf("%s%f", name, &unit);
    if (unit <= 200)
        amt = unit * 0.80 + 100;
    else
        amt = 200 * 0.80 + 100 * 0.90 + ((unit - 300) * 1) + 100;
    if (amt > 400)
        amt = 1.15 * amt;
    printf("Name: %s\n Unit = %f \n charge = %f", name, unit, amt);
}