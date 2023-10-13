#include<stdio.h>

main()
{
	int i,A,G=11;
	for(i=11;i<=15;i++)
	{
		for(A=11;A<=i;A++)
		{
			printf("%i",G++);
		}
		printf("\n");
	}
}

