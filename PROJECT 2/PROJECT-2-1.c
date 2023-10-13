#include<stdio.h>
main()
{
	char AG;
	
	printf("ENTER THE VALUE= ");
	scanf("%c",&AG);

	if( (AG>='A'&& AG<='Z')||(AG>='a' && AG<='z') )
	{
		printf("!! IT'S ALPHABETS !!");
	}
	else if(AG>='0' && AG<='9')
	{
		printf("!! IT'S NUMBER !!");
	}
	else
	{
		printf("IT'S SPECIAL CHAREACTER");
	}
	
}
