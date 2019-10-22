#include <stdio.h>
#include<conio.h>
float TinhTongBinhPhuongNghichDao (int n);

float TinhTongBinhPhuongNghichDao (int n)
{
 float tongbpcd=0 ;int i=1;

while(i <= n)
	{
		tongbpcd = tongbpcd + (1.0/(i * i));
		i++;
	}
	return tongbpcd ;
}
 int main ()
{
	int n ;
	printf ("nhap so nuyen duong :");
	scanf ("%d",&n);
	
	float tongbpcd = TinhTongBinhPhuongNghichDao (  n);
	printf (" TinhTongBinhPhuongNghichDao %f :",tongbpcd );
	
}
