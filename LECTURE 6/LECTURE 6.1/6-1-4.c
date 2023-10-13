#include<stdio.h>

main()
{
	int A=1,n;

	printf("ENTER ANY YOUR WISH NUMBER= ");
	scanf("%i",&n);
	while(n>=A)
	{
	if(n%2==1)
		{
			printf("%i\n",n);
		}
		n--;
	}

}
