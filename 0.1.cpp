#include <stdio.h>
int main ()
{
	int  a,b,c ;
//	for ( i = 100, i <= 999, i++ )
	 
	 	for ( a=1;a<=9;a++ )
	 	 {
	 	 	for ( b=0;b<=9;b++)
	 	   {
	 	 	 for ( c=0;c<=9;c++)
	 	 	 if((a*b*c)%9==0)
	         printf ("%d%d%d\t",a,b,c);
		   }
		   
		  	
		  }
		  
	 	  
    	 return 0; 
	 
	  
	
	
	
}
