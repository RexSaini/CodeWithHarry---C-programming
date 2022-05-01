//Exercise4
#include<stdio.h>
int main()
{
    int x,n,i,j;
    printf("Star Pattern");
    printf("\nEnter number of rows: ");
    scanf("%d",&x);
    if(x<=0)
    {
        printf("Error! Rows can't be zero or/and negative");
    }
    else
    {
        printf("Press 0 for regular triangular star pattern, 1 for inverted triangular star pattern: ");
        scanf("%d",&n);
        printf("\n");
        switch (n)
        {
        case 0:
            for(i=1;i<=x;i++)
            {
                for(j=1;j<=i;j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
        case 1:
            for(i=1;i<=x;i++)
            {
                for(j=i;j<=x;j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
        default:
            printf("Invalid input");
            break;
        }
    }
    return 0;
}