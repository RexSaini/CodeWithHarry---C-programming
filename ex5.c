// Exercise5
#include <stdio.h>

void reverse(int arg[])
{
    int i = 9;
    while (i >= 0)
    {
        printf("%d ", arg[i]);
        i--;
    }
}
int main()
{
    int i = 0, j = 0, arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("Array before reversal\n");
    while (i < 10)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\nArray after reversal\n");
    reverse(arr);
    return 0;
}