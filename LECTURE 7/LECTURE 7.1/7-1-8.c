#include<stdio.h>
main()
{
	int i,A,G=1;
	
	for(i=1;i<=5;i++)
	{
		for(A=i;A>=1;A--)
		{
			printf("%i ",G++);
		}
		printf("\n");
	}
	
}
