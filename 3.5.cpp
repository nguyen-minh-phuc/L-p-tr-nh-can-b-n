#include <stdio.h>
int TinhTongBinhPhuong (int n);

int TinhTongBinhPhuong (int n)
{
 int tongbp=0 ,i=1;

while(i <= n)
	{
		tongbp = tongbp + (i * i);
		i++;
	}
	return tongbp;
}
 int main ()
{
	int n ;
	printf ("nhap so nuyen duong :");
	scanf ("%d",&n);
	
	int tongbp = TinhTongBinhPhuong (  n);
	printf (" TinhTongBinhPhuong %d :",tongbp );
	
}
