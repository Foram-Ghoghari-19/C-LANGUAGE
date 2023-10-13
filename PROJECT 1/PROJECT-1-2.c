#include<stdio.h>

main()
{
	int B;
	float HRA,DA,TA,G;
	
	printf("BASE SALARY= ");
	scanf("%i",&B);

	HRA =B*0.10;
	DA=B*0.05;
	TA=B*0.08;

	printf("HRA = %.2f\n",HRA);
	printf("DA = %.2f\n",DA);
	printf("TA = %.2f\n",TA);

	G=B+HRA+DA+TA;

	printf("GROSS SALARY %.2f\n ",G);

}
