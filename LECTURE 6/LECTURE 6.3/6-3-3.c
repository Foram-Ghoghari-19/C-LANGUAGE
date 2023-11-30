#include <stdio.h>

int main() 
{
    int N;
    int i;
    
    printf("Enter a number: ");
    scanf("%d", &N);

    ("Multiplication table of %d:\n", N);
    for (i = 1; i <= 10; i++) 
	{
        printf("%d x %d = %d\n", N, i, N * i);
    }

}

