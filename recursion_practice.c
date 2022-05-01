//Factorial of a number through recursion
#include <stdio.h>
int factorial(int num)
{
    if (num == 1 || num == 0)
        return 1;
    else if (num>1)
        return (num * factorial(num - 1));
}

int main()
{
    int n, a;
    printf("Enter the number for calculating the factorial: ");
    scanf("%d", &n);
    factorial(n);
    if (n>=0)
    printf("\nThe factorial of %d is %d",n,factorial(n));
    else
    printf("Error! The number can't be negative");
    return 0;
}