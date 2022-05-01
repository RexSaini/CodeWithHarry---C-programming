// Employee Manager
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len, n;
    char *ptr;
    printf("Number of employees: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\nEmployee %d", (i + 1));
        printf("\nEnter number of characters in your employee ID: ");
        scanf("%d", &len);
        ptr = (char *)calloc((len+1), sizeof(char));
        printf("Enter your employee ID: ");
        scanf("%s", ptr);
        printf("\nYour employee ID is: %s\n", ptr);
        free(ptr);
    }
    ptr=NULL;
    return 0;
}