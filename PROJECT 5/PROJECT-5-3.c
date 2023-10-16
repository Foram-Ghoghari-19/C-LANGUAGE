#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter row of Array : ");
    scanf("%d", &r);
    printf("Enter row of Array : ");
    scanf("%d", &c);

    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter array[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n\n----:Matrix:----\n\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    printf("\n\n----:Transpose Matrix:----\n\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%d ", arr[j][i]);
        printf("\n");
    }

    return 0;
}
