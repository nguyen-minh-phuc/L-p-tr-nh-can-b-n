#include <stdio.h>
int main ()
{
		int tong =0 ,n;
	 printf ("nhap so n: ");
       scanf ("%d",& n);
       
       while (n>0)
       {
       	tong += n%10;
       	n=n/10;
	   }
  
  printf ("tong la %d:",tong);
	reture 0;
}
