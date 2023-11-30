#include <stdio.h>

int main() {
    int N;
    long long factorial = 1;
    int i;
    
    printf("Enter N: ");
    scanf("%d", &N);

    
    if (N < 0) 
	{
        printf("Factorial is not defined for negative numbers.\n");
    } else {
       
        for (i = 1; i <= N; i++) 
		{
            factorial *= i;
        }
        printf("Factorial of %d is: %llu\n", N, factorial);
    }

}

