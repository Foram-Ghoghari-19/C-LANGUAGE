#include<stdio.h>

main()
{
	int n,A,n1=0,n2=1,n3;
	printf("ENTER ANY NUMBER= ");
	scanf("%i",&n);
	for(A=0;A<=n;A++)
	{
		printf("%i",n1);
		n3=n1+n2;
		n1=n2;
		n2=n3;
	}
}
