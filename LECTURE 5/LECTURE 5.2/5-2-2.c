#include<stdio.h>

main()
{
	int P,Q,R,S;
	
	printf("ENTER P=");
	scanf("%i",&P);
	printf("ENTER Q=");
	scanf("%i",&Q);
	printf("ENTER R=");
	scanf("%i",&R);
	printf("ENTER S=");
	scanf("%i",&S);

	if(P>Q)
	{
		if(P>R)
		{
			if(P>S)
			{
				printf("!! P IS BIG !!");
			}
			else
			{
				printf("!! S IS BIG !!");
			}
		}
		else
		{
			if(R>S)
			{
				printf("!! R IS BIG !!");
			}
			else
			{
				printf("!! S IS BIG !!");
			}
		}
	}
	else
	{
		if(Q>R)
		{
			if(Q>S)
			{
				printf("!! Q IS BIG !!");
			}
			else
			{
				printf("!! S IS BIG !!");
			}
		}
		else
		{
			if(R>S)
			{
				printf("!! R IS BIG !!");
			}
			else
			{
				printf("!! S IS BIG !!");
			}
		}
	}
	
}
