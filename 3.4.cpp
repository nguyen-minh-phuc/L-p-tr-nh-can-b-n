#include <stdio.h>
float kt_HinhTamGiac (float a ,float b, float c);
float chuvi (float a ,float b, float c);


float kt_HinhTamGiac (float a ,float b, float c)
{
	if ((a+b)>c  && (b+c)>a && (a+c)>b)
		return 1 ;
	else 
		return 0;	
}
 float chuvi (float a ,float b, float c)
{
 	float cv =a+b+c;
 	return cv;
}
 int main ()
 {
 	float a1,b1,c1 ;
	printf (" nhap a : ");
	scanf (" %f",&a1);
	printf (" nhap b : ");
	scanf (" %f",&b1);
	printf (" nhap c ");
	scanf (" %f",&c1);
	
	float kq =kt_HinhTamGiac ( a1 , b1,  c1);
	if  (kq ==1)
		{
			float cv= chuvi (a1,b1,c1);
			printf (" chu vi la %f",cv);
		}
		else
			printf (" khong phai la hinh tam giac");

}

 
