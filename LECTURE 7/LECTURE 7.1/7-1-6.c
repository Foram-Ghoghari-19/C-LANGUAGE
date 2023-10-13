#include<stdio.h>

main()
{
	int i,A;
	
	for(i=5;i>=1;i--)
	{
		for(A=1;A<=i;A++)
		{
			if(A%2==1)
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
	
}
