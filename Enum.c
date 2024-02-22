#include<stdio.h>

enum Directions
{
    North,
    East,
    West,
    South,
};

int main()
{
    enum Directions d = South;
    switch (d)
    {
    case North:
        printf("Hello North\n");
        break;
    case East:
        printf("Hello East\n");
        break;
    case West:
        printf("Hello West\n");
        break;
    case South:
        printf("Hello South\n");
        break;
    default:
        printf("Invalid directions");
    }
}