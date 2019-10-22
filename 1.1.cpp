#include <stdio.h>

	int tinhtong (int a, int b)
{	
	int tong =a+b ;
	return tong ;
}

 	int tinhtich (int a, int b)
{	
	int tich =a*b ;
	return tich ;
}

	float  tinhthuong (int a,int  b)
{	
	float thuong =(float)a/b ;
	return thuong ;
}

int main ()
{
	int a ,b ;
	printf (" nhap a : ");
	scanf ("%d",&a);
	printf (" nhap b : ");
	scanf ("%d",&b);
	
	int tong = tinhtong(a,b);
	printf (" %d +%d= %d",a,b,tong);
	
	int tich = tinhtich(a,b);
	printf ("\n %d *%d= %d",a,b,tich);
	
	float thuong = tinhthuong(a,b);
	printf ("\n %d /%d= %f",a,b,thuong);
}	


	



