#include<stdio.h>
#define P printf  
{   
int getInt()
{
   	int n;
   	scanf("%d",&n);
   	return n;
}
    
int sum (int a , int  b);
{	
	return a + b;
}
 
int sub (int a , int b);
{ 
     return a-b;
}
    	
int mul (int a , int b);
{
    	return a*b;
}
    	
0int div (int a, int b);
{
    return a/b;	
}
}

void calc();{
	int ans,a,b,s,choice;
	  
	  s:
	     P("\n1)sum ");
		 P("\n2)sub ");
		 P("\n3)mul ");
		 P("\n4)div ");
		 P("\n5)mod ");
		 P("\n6)exit");
		 
		 P("\nEnter your choice number : \n");
		 choice = getInt();
		 
		 switch (choice)
		 {
		 
		 	           case 1 :
		 	           	        P("\n Enter number of a :");
		 	           	        a= getInt ();
		 	           	        P("\n Enter number of b :");
		 	           	        b= getInt ();
		 	           	        ans= sum(a,b);
		 	           	        P("\n Answer = %d", ans);
		 	           	        goto s ;
		 	           	        
		 	           	        
                        case 2:		 	        
		 	           	        P("\n Enter number of a :");
		 	           	        a= getInt ();
		 	           	        P("\n Enter number of b :");
		 	           	        b= getInt ();
		 	           	        ans= sub(a,b);
		 	           	        P("\n Answer = %d", ans);
		 	           	        goto s ;
		 	           	        
		 	           	        
					    case 3 :
		 	           	        P("\n Enter number of a :");
		 	           	        a= getInt ();
		 	           	        P("\n Enter number of b :");
		 	           	        b= getInt ();
		 	           	        ans= mul(a,b);
		 	           	        P("\n Answer = %d", ans);
		 	           	        goto s ;
		 	           	        
		 	           	        
						case 4 :
		 	           	        P("\n Enter number of a :");
		 	           	        a= getInt ();
		 	           	        P("\n Enter number of b :");
		 	           	        b= getInt ();
		 	           	        ans= div(a,b);
		 	           	        P("\n Answer = %d", ans);
		 	           	        goto s ;
		 	           	        
		 	           	case 5 :
		 	           			P("\n Enter number of a :");
		 	           	        a= getInt ();
		 	           	        P("\n Enter number of b :");
		 	           	        b= getInt ();
		 	           	        ans= mod(a,b);
		 	           	        P("\n Answer = %d", ans);
		 	           	        goto s ;
					    default 
					            P("Invalid Input");
						        		     
}
}
main()
{
	calc();
}

    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
	
    	
	
	
	
