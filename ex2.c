#include<stdio.h>
int main()
{
    int a;
    float b;
    printf("Press 1 to convert kms to miles");
    printf("\nPress 2 to convert inches to feet");
    printf("\nPress 3 to convert cm to inches");
    printf("\nPress 4 to convert pounds to kgs");
    printf("\nPress 5 to convert inches to meters \n");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("\nEnter value in kms: ");
        scanf("%f",&b);
        printf("Value in miles= %d",b/1.609);
        break;
    case 2:
        printf("\nEnter value in inches: ");
        scanf("%f",&b);
        printf("Value in inches= %f",b/12);
        break;
    case 3:
        printf("\nEnter value in cm: ");
        scanf("%f",&b);
        printf("Value in inches= %f",b/2.54);
        break;
    case 4:
        printf("\nEnter value in pounds:");
        scanf("%f",&b);
        printf("Value in kgs= %f",b/2.205);
        break;
    case 5:
        printf("\nEnter value in inches:");
        scanf("%f",&b);
        printf("Value in meters= %f",b/39.37);
        break;
    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}