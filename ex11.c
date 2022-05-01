// Exercise11
// Palindrome checker
#include <stdio.h>

int isPalindrome(int num)
{
    int originalnumber = num;
    int reversed = 0;
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }

    if (originalnumber == reversed)
        return 1;

    else
        return 0;
}

int main()
{
    int n;
    printf("\nPalindrome checker");
    printf("\nEnter a number: ");
    scanf("%d", &n);
    if (isPalindrome(n))
    {
        printf("\nGiven number is a palindrome");
    }
    else
    {
        printf("\nGiven number is not a palindrome");
    }
    return 0;
}