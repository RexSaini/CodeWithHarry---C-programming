//Fibonacci using recursion
#include<stdio.h>
int fib(int n);

int fib(int n)
{
    if(n==0 || n==1)
    return n;
    else 
    return fib(n-1)+fib(n-2);
}

int main()
{
    int a=0,n;
    printf("Fibonacci series");
    printf("\nEnter number of terms: ");
    scanf("%d",&n);
    if(n<=0)
    printf("\nError! Number of terms can't be less than or equal to zero");
    else
    {
        for (int i=0; i<n; i++)
        {
            printf("%d, ",fib(a));
            a++;
        }  
    }
    return 0;
}