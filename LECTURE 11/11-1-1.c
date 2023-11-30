#include <stdio.h>

void Elements(int *arr, int size)
    int i ;
{
    for (i = 0; i < size; i++) 
	{
        *(arr + i) = (*(arr + i)) * (*(arr + i));
    }
}

int main() {
    int size;
    int arr;
    int i,j;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    Elements(arr, size);
    int i ;

    printf("elements of the array:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

