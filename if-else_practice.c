//Quiz question
#include<stdio.h>
int main()
{
    int p;
    printf("Exams: Maths and Science");
    printf("\nExams passed\tPress 0, 1, 2 appropriately: ");
    scanf("%d",&p);
    if (p==0)
    {
        printf("No gift");
    }
    else if (p==1)
    {
        printf("Gift: Rs15");
    }
    else if (p==2)
    {
        printf("Gift: Rs45");
    }
    else
    {
        printf("Error! Please press correctly");
    }
    return 0;
}