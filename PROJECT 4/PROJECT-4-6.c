#include<stdio.h>
main()
{
	int i,A;
	for(i=5;i>=1;i--)
	{
		for(A=1;A<=5;A++)
		{
			(i==5)||(i==3)||(A==1)||(A==5)
			? printf(" *")
			: printf("  ");
		}
		printf("\n");
	}
}
