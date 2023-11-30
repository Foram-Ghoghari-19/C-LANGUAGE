#include <stdio.h>

void reverseArray(int *arr, int size) 
{
    int *start = arr;
    int *end = arr + size - 1;

    while (start < end) 
	{

        int temp = *start;
        *start = *end;
        *end = temp;

      start++;
        end--;
    }
}

int main() 
{
    int size;
    int i ;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, size);

    printf("Reversed array:\n");
    for (i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }

    return 0;
}
