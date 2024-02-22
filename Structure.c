#include<stdio.h>
union Onion
{
    int k;
    char l;
    float m;
};
struct Structure1
{
    int a;
    char c;
    float f;
};

void main()
{
    struct Structure1 structure={1,'H',4.56};
    printf("%d\n%c\n%f\n", structure.a,structure.c,structure.f);

    union Onion pakora={5,'k',99.99};
     printf("%d\n%c\n%f\n",pakora.k,pakora.l,pakora.m);

}


