#include <stdio.h>

float cube(float num);

int main()
{
    int num;
    float c;
    
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    c = cube(num);

    printf("Cube of %d is %.2f", num, c); 
    
    return 0;
}

float cube(float num)
{
    return (num * num * num);
}

