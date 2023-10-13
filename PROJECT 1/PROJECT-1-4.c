#include<stdio.h>

main()
{
	int A,B;
	
	printf("ENTER A= ");
	scanf("%i",&A);
	printf("ENTER B= ");
	scanf("%i",&B);
	A=A*B;
	B=A/B;
	A=A/B;

	printf("A=%i\n",A);
	printf("B=%i\n",B);
	
}
