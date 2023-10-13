#include<stdio.h>
main()
{
	int A,B,C;
	
	printf("ENTER A AND B=");
	scanf("%i%i",&A,&B);

	C=A;
	A=B;
	B=C;
	printf("SWAPING A = %i\n",A);
	printf("SWAPING B = %i\n",B);

}
