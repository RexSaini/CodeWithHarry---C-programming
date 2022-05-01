#include<stdio.h>
void func(int *x,int *y)
{
    int temp=*x;
    *x=*x+*y;
    *y=temp-*y;
}

int main()
{
    int a=10,b=2;
    printf("The value of a= %d\tThe value of b= %d",a,b);
    func(&a,&b);
    printf("\nAfter function");
    printf("\nThe value of a= %d\tThe value of b= %d",a,b);
}