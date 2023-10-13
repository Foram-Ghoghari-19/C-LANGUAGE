#include<stdio.h>
#include<conio.h>

main()
{
	int A,B;
	clrscr();

	printf("ENTER TWO NUMMBER= ");
	scanf("%i%i",&A,&B);
	printf("(A+B)^3= %i",(A*A*A)+(3*A*A*B)+(3*A*B*B)+(B*B*B));

	getch();
}
