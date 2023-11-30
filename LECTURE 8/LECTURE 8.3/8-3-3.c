#include<stdio.h>

int main()
{
    int R;
    printf("ENTER ROW & COLUMN SIZE= ");
    scanf("%i",&R);

   printf("\n=======ARRAY A=======\n");
   int a[R][R];
   for (int i =0 ; i <= R; i++)
   {
        for (int A =0 ; A <= R; A++)
        {
            printf("b[%i][%i]= ",i,A);
            scanf("%i",&a[i][A]);
        }
   }

   printf("\n=======SUM OF DAIAGONAL ELEMENTS=======\n");
   int sum=0;
   for (int i =0 ; i <= R; i++)
   {
        for (int A =0 ; A <= R; A++)
        {
            if (i==A)
            {
                sum+=a[i][A];
            }
        }
        printf("\n");
   }
   printf("sum= %i",sum);
}

