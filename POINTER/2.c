#include<stdio.h>
main()
{
	int a=100;
	int *pointer;
	pointer = &a;
	
	printf("A normal value : %d\n",a);
	printf("A pointer value :%d\n\n",*pointer);
	
	a=450;
	printf("A normal value : %d\n",a);
	printf("A pointer value : %d\n\n",*pointer);
	
	*pointer = 30;
	 
	printf("A normal value : %d\n",a);
	printf("A pointer value : %d\n\n",pointer);
	
}
