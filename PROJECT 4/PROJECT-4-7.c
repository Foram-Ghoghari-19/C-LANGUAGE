#include<stdio.h>

main()
{
	int i,A,S;
	for(i=5;i>=1;i--)
	{
		for(S=1;S<=5-i;S++)
		{
			printf(" ");
		}
		for(A=1;A<=i;A++)
		{
			if(A%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
}
