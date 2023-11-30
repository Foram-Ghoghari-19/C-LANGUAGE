#include<stdio.h>

int main()
{
   int R,C;

   printf("ENTER ARRAY'S ROW= ");
   scanf("%i",&R);
   printf("ENTER ARRAY'S COLUMN= ");
   scanf("%i",&C);

   int a[R][C],sum=0,n;
   for (int i =0 ; i <= R; i++)
   {
        for (int A =0 ; A <= C; A++)
        {
            printf("a[%i][%i]= ",i,A);
            scanf("%i",&a[i][A]);
            sum+=a[i][A];
        }
        printf("\n");
   }
   n=R*C;
   printf("EVREGE OF ALL ELEMENT= %2.f",(float)sum/n);
}   
