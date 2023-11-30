#include<stdio.h>

main()
{
	int i,n;
	printf("Enter length of array:");
	scanf("%d\n",&n);
	
	int a[i];
	
	for(i=0; i<n; i++){
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}	
	
	printf("elements...\n");
	for(i=0; i<n; i++){
		printf("%d",a[i]*a[i]);
		
	}
}
