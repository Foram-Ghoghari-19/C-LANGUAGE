#include <stdio.h>
main() 
{
    int N, sum = 0;
    int i ;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        sum += i;
    }
    printf("The sum of numbers from 1 to %d is: %d\n", N, sum);

}

