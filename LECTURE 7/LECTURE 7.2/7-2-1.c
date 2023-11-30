#include <stdio.h>

int main()
{
	int i,j;
    int rows = 5;
    int k ;
    for (i = 1; i <= rows; i++) {
        
        for (j = rows; j > i; j--) {
            printf("   ");
        }

        
        for (k = i; k >= 1; k--) {
            printf("%d", k);
            if (k > 1) {
                printf(" ");
            }
        }

         printf("\n");
    }

    
}

