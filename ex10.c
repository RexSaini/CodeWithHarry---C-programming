// Exercise10
// Matrix multiplication
#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("\nMatrix 1");
    printf("\nRows: ");
    scanf("%d", &a);
    getchar();
    printf("\nColumns: ");
    scanf("%d", &b);
    getchar();
    printf("\nMatrix 2");
    printf("\nRows: ");
    scanf("%d", &c);
    getchar();
    printf("\nColumns: ");
    scanf("%d", &d);
    getchar();
    int arr1[a][b], arr2[c][d], r[a][d];
    if (b == c)
    {
        printf("\nEnter elemets of matrix 1");
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= b; j++)
            {
                printf("\nEnter %d-%d element: ", i, j);
                scanf("%d", &arr1[i][j]);
                getchar();
            }
        }

        printf("\nMATRIX 1\n");
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= b; j++)
            {
                printf("%d\t", arr1[i][j]);
            }
            printf("\n");
        }

        printf("\nEnter elemets of matrix 2");
        for (int i = 1; i <= c; i++)
        {
            for (int j = 1; j <= d; j++)
            {
                printf("\nEnter %d-%d element: ", i, j);
                scanf("%d", &arr2[i][j]);
                getchar();
            }
        }

        printf("\nMATRIX 2\n");
        for (int i = 1; i <= c; i++)
        {
            for (int j = 1; j <= d; j++)
            {
                printf("%d\t", arr2[i][j]);
            }
            printf("\n");
        }
    }

    else
    {
        printf("\nInavlid! Matrices can't be multiplied");
    }

    printf("\nMatrix formed after multiplication: \n");
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            r[i][j] = 0;
            for (int k = 1; k <= b; k++)
            {
                r[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            printf("%d\t", r[i][j]);
        }
        printf("\n");
    }
    return 0;
}