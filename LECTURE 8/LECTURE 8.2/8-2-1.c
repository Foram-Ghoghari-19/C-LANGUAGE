#include<stdio.h> 
#define P printf
#define S scanf
main()
{
	
	int n1,n2;
	P("Enter Array A size:");
	S("%d",&n1);
	P("Enter Array B size");
	S("%d",&n2);
	
	int a[n1],b[n2],c[n1+n2],i;
	
	P("Enter A element:\n");
	
	for(i=0; i<n1; i++){
		P("a[%d]",i);
		S("%d\n",&a[i]);
	}
	
	P("Enter B element:\n");
	
	for(i=0; i<n2; i++){
		P("b[%d]",i);
		S("%d\n",&a[i]);
		
	}
	
	for(i=0; i<n1; i++)
	{
		c[i] = a[i];
	}
	
	for(i=0; i<n1+n2; i++)
	{
		c[i+n1] = b[i];
	}
	for(i=0; i<n1+n2; i++ )
	{
		P("Array c[%d]: %d\n",i,c,c[i]);
	}
}
