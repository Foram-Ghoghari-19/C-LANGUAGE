#include<stdio.h>

main()
{
	int n,sum=0,first D,last D;

	printf("ENTER NUMBER TO FIND SUM OF FIRST DIGIT AND LAST DIGIT= ");
	scanf("%i",&n);

	last D=n%10;
		while(n>=10)
		{
			n=n\10;
		}
		first D=n;
		sum=first D+last D;
		printf("SUM OF FIRST AND LAST DIGIT= %i",sum);
		
}	
