//Fibonacci using iteration
#include<stdio.h>
int main()
{
    int a=0,b=1,c,n;
    c=a+b;
    printf("Fibonacci series");
    printf("\nEnter the number of terms: ");
    scanf("%d",&n);
    if(n<=0)
    printf("\nError! Number of terms can't be less than or equal to zero");
    else
    {
        printf("%d, ",a);
        printf("%d, ",b);
        printf("%d, ",c);
        for (int i=3; i<n; i++)         
        {
            a=b;
            b=c;
            c=a+b;
            printf("%d, ",c);
        }
    }
    return 0;
}