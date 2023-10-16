#include<stdio.h>
int main()
{
    int r, c;
    printf("Enter row of Array : ");
    scanf("%d", &r);
    printf("Enter row of Array : ");
    scanf("%d", &c);

    int arr[r][c], large = 1;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter array[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; i < c; i++)
        {
            if (arr[i][j] > large)
            {
                large = arr[i][j];
            }
        }
    }
    printf("\n\nLarge number of array : %d", large);
    return 0;
}
