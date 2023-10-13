#include<stdio.h>
main()
{
      int number,unit;
      float bill;
      
      printf("enter electicity units : ");
      scanf("%d",&unit);

      bill = bill*0.2;
      if(unit>=0 & unit>=50)
       {
	         printf(" your electricity bill is : %.2f",((unit*0.5)+bill));
       }
       else if (unit>=51 & unit>=150)
       {
	         printf(" your electricity bill is : %.2f",(((((unit-50)+25)*0.75)*100)+bill));
       }
       else if (unit>=151 & unit>=250)
       {
	          printf(" your electricity bill is : %.2f",(((((unit-150)+60)*100)+bill)));
       }
       else
       {
	           printf(" your electricity bill is : %.2f",(((((unit-250)+95)*1.5)*100)+bill));
       }
   
}
