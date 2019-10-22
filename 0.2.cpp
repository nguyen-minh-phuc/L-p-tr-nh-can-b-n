#include <stdio.h>
#include <math.h>
int main ()
{
	int  n, dem=0 ;
	printf ("nhap so nguyen duong :");
	scanf ("%d",&n);
	
	
	for ( int i=2; i<n ; i++)
      if ( n%i==0 )
      {
	    dem =dem+1 ;  
       break ;
      }  
       if (dem==0)
      	printf ("%d la so nuyen to " ,n);
    else	
      	printf ("%d khong la so nuyen to " ,n);
     
  return 0;
}
      
	  	
      
    
	
	
