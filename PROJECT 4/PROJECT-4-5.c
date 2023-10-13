#include<stdio.h>

main()
{
	int i,A,s;
	for(i=5;i>=1;i--)
	{
		for(s=1;s<=i-1;s++)
		{
			printf(" ");
		}
		for(A=i;A<=5;A++)
		{
			printf("%i",A);
		}
		for(A=4;A>=i;A--)
		{
			printf("%i",A);
		}
		printf("\n");
	}
}
