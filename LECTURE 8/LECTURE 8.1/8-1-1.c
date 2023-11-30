#include<stdio.h>

main()
{
    int size;
    printf("ENTER ARRAY OF SIZE= ");
    scanf("%i",&size);

    int a[size];
    for (int i = 0; i < size; i++)
    {
        printf("ENTER ARRAY a[%i]= ",i);
        scanf("%i",&a[i]);
    }
    
        printf("LENTH OF ARRAY= %i",size);
    
}
