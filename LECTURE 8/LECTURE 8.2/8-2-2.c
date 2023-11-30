#include<stdio.h>

main()
{
	int y1,y2,index=0;
	
	printf("Enter y1:");
	scanf("%d",&y1);
	printf("Enter y2:");
	scanf("%d",&y2);
	
	int a[index],i;
	
	for(i=y1;i<=y2;i++)
	{	
		if(i%4==0)
		{
			printf("%d",i);
			index++;
		}
	printf("\n");
	}
}
