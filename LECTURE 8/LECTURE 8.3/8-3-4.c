#include <stdio.h>
int main()
{
    int R,C;
    printf("ENTER ROW SIZE= ");
    scanf("%i",&R);
    printf("ENTER COLUMN SIZE= ");
    scanf("%i",&C);

    int a[R][C],sum = 0;
    printf("\n=======ARRAY A======\n");

    for (int i = 0; i < R; i++)
    {
        for (int A = 0; A < C; A++)
        {
            printf("ENTER A[%i][%i]= ",i,A);
            scanf("%i",&a[i][A]);
        }
    }

    for (int i = 0; i < R; i++)
    {
        for (int A = 0; A < C; A++)
        {
            if ((i==0) || (A==0) || (i==R-1) || (A==C-1))
            {
                printf("%i ",a[i][A]);
                sum+=a[i][A];
            }
            else
                printf("  ");
        }
        printf("\n");
    }

    printf("THE SUM OF BOUNDRY ELEMENT OF THIS ARRAY= %i",sum);
}
