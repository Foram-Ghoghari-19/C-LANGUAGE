#include<stdio.h>
    
	int binaryconverter(){
    int n,rem,binary=0,i=1;
	printf("Enter the number :");
	scanf("%d",&n);
	
	while(n!=0){
		rem=n%2;
		n/=2;
		binary+=(rem*i);
		i*=10;
	}
	return binary;
}
main()
{
	printf("Binary Number : %d",binaryconverter());
}