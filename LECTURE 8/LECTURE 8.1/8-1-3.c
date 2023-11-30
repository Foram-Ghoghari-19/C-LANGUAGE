#include<stdio.h>

int main()
{
    int size,i;
    printf("ENTER SIZE OF ARRAY= ");
    scanf("%i",&size);

    int A[size],B[size],C[size];

    printf("\n========ARRAY A =========");

    for ( i = 0; i < size; i++)
    {
        printf("\nA[%i]= ",size);
        scanf("%i",&A[size]);
    }

    printf("\n========ARRAY B =========");

    for ( i = 0; i < size; i++)
    {
        printf("\nB[%i]= ",size);
        scanf("%i",&B[size]);
    }

    printf("\n========SUBSTRECTION OF ARRAY C =========");

    for ( i = 0; i < size; i++)
    {
        C[size]=A[size]+B[size];
        printf("\nC[%i]=  %i\n",i,C[size]);
    }

    
}
