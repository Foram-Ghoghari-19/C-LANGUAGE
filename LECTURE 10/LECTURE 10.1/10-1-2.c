#include<stdio.h>
void UDF(int num){
	
	  if (num % 3 == 0 && num % 5 == 0) 
	  {
        printf("Number is divisible by 3 and 5");
      } 
	  else 
	  {
        printf("Number is not divisible by 3 and 5");
      }
}
main()
{ 
      int num;
      printf("Enter Any Number :");
      scanf("%d",&num);
      
	  UDF(num);  
}
