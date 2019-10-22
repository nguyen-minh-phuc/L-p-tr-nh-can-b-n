#include <stdio.h>
int main ()
{
	int tong =0 ,n;
	 printf ("nhap so n: ");
  scanf ("%d",& n);
	while (n<=100)
 {
 	printf("nhap so n:");
	 scanf ("%d",&n);
	 tong += n ;
 }
	 printf ("tong la%d:",tong);
  
 
	return 0 ;
}

