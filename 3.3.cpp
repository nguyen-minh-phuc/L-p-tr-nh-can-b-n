#include <stdio.h>
float tinhchuvi (float r )
{
	float cv = 2*3.14 *r; 
	return cv ;
}
int main ()
{
	float r ;
	printf (" nhap ban kinh : ");
	scanf (" %f",&r);
	
	float kq = tinhchuvi(r);
	printf("chu vi hinh tron la : %f",kq);
	
	
	
}		

