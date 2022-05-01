// Travel Agency Manager
#include <stdio.h>

typedef struct driver_data
{
    char name[30];
    char driving_license_number[50];
    char route[20];
    float kms_travelled;
} dr;

int main()
{
    int n;
    printf("Enter number of drivers: ");
    scanf("%d", &n);
    dr d_arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter name of %d driver: ", (i + 1));
        scanf("%s", &d_arr[i].name);
        printf("Enter driving license number of %d driver: ", (i + 1));
        scanf("%s", &d_arr[i].driving_license_number);
        printf("Enter route of %d driver: ", (i + 1));
        scanf("%s", &d_arr[i].route);
        printf("Enter kms travelled of %d driver: ", (i + 1));
        scanf("%d", &d_arr[i].kms_travelled);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n%d Driver details", (i + 1));
        printf("\nName:%s", d_arr[i].name);
        printf("\nDriving License number: %s", d_arr[i].driving_license_number);
        printf("\nRoute: %s", d_arr[i].route);
        printf("\nKms travelled: %d", d_arr[i].kms_travelled);
    }
    return 0;
}