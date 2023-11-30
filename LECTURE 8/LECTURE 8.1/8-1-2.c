#include<stdio.h>

main()
{
    int size,sum=0;

    printf("ENTER ARRAY OF SIZE= ");
    scanf("%i",&size);

    int a[size];
    for (int i = 0; i < size; i++)
    {
        printf("ENTER ARRAY a[%i]= ",i);
        scanf("%i",&a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        sum+=a[i];
    }
        
    printf("AVREGE OF ARRAY = %2.f\n",(float)sum/size);
}

