#include<stdio.h>

int thesum(int n,int i, int sum)  
{
	if(i <= n) {
		sum+=i;
		i++;
		thesum(n,i,sum);
	}
	else
		return sum;
}

 main () 
{
 	int n;
 	printf("Enter number : ");
 	scanf("%d", &n);
 	
 	printf("Sum = %d",thesum(n , 1, 0));
}
