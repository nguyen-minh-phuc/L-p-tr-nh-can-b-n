#include <stdio.h>
int main ()
{
  float diem ; 
  printf ("nhap diem tu 0-> 10: ");
  scanf ("%f",&diem);
	
	while (diem<0 || diem>10 )
	 {
		printf (" ko hop li");
		printf ("\nnhap lai : ");
		scanf ("%f",&diem);
		
     }
	  printf (" diem vua nhap la %f:",diem);
     
    return 0 ;
}
