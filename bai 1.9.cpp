#include <stdio.h>
int main ()
{
		float r ,cv,dt;
	
	printf("nhap so nguyen r:");
  scanf("%f",&r);
  
  cv=2*3.14*r ; dt=3.14*r*r ;
   printf ("chu vi hinh tron ban kinh %.2f=:%.2f",r,cv);
	printf ("\ndien tich hinh tron ban kinh %.2f=:%.2f",r,dt);
	
	return 0;
}
