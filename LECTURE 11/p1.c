#include<stdio.h>
main()
{
	int a = 100;
	
	int *ptr1;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	
	ptr1= &a;
	ptr2= &ptr1;
	ptr3= &ptr2;
	ptr4= &ptr3;
	
	printf("A : %d\n",a);
	printf("PTR1 : %d\n",*ptr1);
	printf("PTR2 : %d\n",**ptr2);
	printf("PTR3 : %d\n",***ptr3);
	printf("PTR4 : %d\n",****ptr4);
	
	****ptr4='A';
	
	printf("A : %d\n",a);
	printf("PTR1 : %d\n",*ptr1);
	printf("PTR2 : %d\n",**ptr2);
	printf("PTR3 : %d\n",***ptr3);
	printf("PTR4 : %d\n",****ptr4);
	
	***ptr3= 'D';
	
	
	printf("A : %d\n",a);
	printf("PTR1 : %d\n",*ptr1);
	printf("PTR2 : %d\n",**ptr2);
	printf("PTR3 : %d\n",***ptr3);
	printf("PTR4 : %d\n",****ptr4);
	
}
