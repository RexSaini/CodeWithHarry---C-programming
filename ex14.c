// Exercise14 solution
#include <stdio.h>
#include <math.h>
#define PI 3.14159

float Edistance(int x1, int y1, int x2, int y2)
{
    int a = (y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1);
    return sqrt(a);
}

float areaOfCircle(int x1, int y1, int x2, int y2, float (*distance)(int x1, int y1, int x2, int y2))
{
    return distance(x1, y1, x2, y2);
}

int main()
{
    int x1, y1, x2, y2;
    float dst;
    printf("\nPoint 1:\n");
    printf("Enter the value of x1: ");
    scanf("%d", &x1);
    printf("Enter the value of y1: ");
    scanf("%d", &y1);

    printf("\nPoint 2:\n");
    printf("Enter the value of x2: ");
    scanf("%d", &x2);
    printf("Enter the value of y2: ");
    scanf("%d", &y2);

    dst = areaOfCircle(x1, y1, x2, y2, Edistance);
    printf("The distance between these points is = %f\n", dst);
    printf("The area of cicle with radius diatnce between Point 1 and Point 2 is = %f\n", dst * dst * PI);
    return 0;
}