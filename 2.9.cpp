#include <stdio.h>
int main ()
{
	float tong , n;
  printf ("nhap so n: ");
  scanf ("%f",& n);
  
  while (n>0)
  {
  	tong += 1/n ;
  	printf ("nhap so n :");
  	scanf ("%f",&n);
  }
	printf ("tong la %f: ",tong);
	
	return 0;
}
