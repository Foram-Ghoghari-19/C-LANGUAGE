#include <stdio.h>
   int i ;
   int j;
   void calculateCubes(int *arr, int rows, int cols) 
{
           for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            
            int *element = (arr + i * cols + j);
            *element = (*element) * (*element) * (*element);
        }
    }
}

void displayArray(int *arr, int rows, int cols) {
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("%d\t", *(arr + i * cols + j));
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    int i ;
    printf("Enter the number of rows and columns for the 2D array: ");
    scanf("%d %d", &rows, &cols);

    int myArray[rows][cols];

    printf("Enter the elements of the 2D array:\n");

    
    for (i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            scanf("%d", &myArray[i][j]);
        }
    }

    \
    calculateCubes(&myArray[0][0], rows, cols);

    
    printf("\nOriginal 2D array:\n");
    displayArray(&myArray[0][0], rows, cols);

    printf("\nCubes of elements in the 2D array:\n");
    displayArray(&myArray[0][0], rows, cols);

    return 0;
}
n
