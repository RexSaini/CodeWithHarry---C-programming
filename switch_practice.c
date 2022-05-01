#include<stdio.h>
int main()
{
    int p;
    printf("Press 0, 1, 2 for numer of exams cleared: ");
    scanf("%d",&p);
    switch (p)
    {
    case 0:
        printf("No Gift");
        break;
    case 1:
        printf("Gift: $15");
        break;
    case 2:
        printf("Gift: $45");
        break;
    default:
        printf("Invalid Input");
    }
    return 0;
}