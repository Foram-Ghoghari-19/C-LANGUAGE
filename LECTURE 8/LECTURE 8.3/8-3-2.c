#include<stdio.h>

int main()
{
   int R,C;

   printf("ENTER ARRAY'S ROW= ");
   scanf("%i",&R);
   printf("ENTER ARRAY'S COLUMN= ");
   scanf("%i",&C);

   printf("\n=======ARRAY A=======\n");
   int a[R][C];
   for (int i =0 ; i <= R; i++)
   {
        for (int A =0 ; A <= C; A++)
        {
            printf("a[%i][%i]= ",i,A);
            scanf("%i",&a[i][A]);
        }
   }

   printf("\n=======ARRAY B=======\n");
   int b[R][C];
   for (int i =0 ; i <= R; i++)
   {
        for (int A =0 ; A <= C; A++)
        {
            printf("b[%i][%i]= ",i,A);
            scanf("%i",&b[i][A]);
        }
   }

   printf("\n=======ARRAY C=======\n");
   int c[R][C];
   for (int i =0 ; i <= R; i++)
   {
        for (int A =0 ; A <= C; A++)
        {
            c[i][A] = a[i][A] + b[i][A];
            printf("%i ",c[i][A]);
        }   
        printf("\n");
   }
}   
