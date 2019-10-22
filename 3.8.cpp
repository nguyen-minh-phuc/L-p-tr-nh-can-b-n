#include <stdio.h>
int BoiChungNhoNhat(int a,int b)
{
	for (int i=1; 1<=b ;i++)
		if(a*i%b==0)
			return a*i ;
}
int main ()
{
	int a,b ;
	printf ("nhap so nuyen duong a :");
	scanf ("%d",&a);
	printf ("nhap so nuyen duong b :");
	scanf ("%d",&b);
	
	int kp = BoiChungNhoNhat ( a,b);
	printf ("Boi Chung Nho Nhat cua %d va %d la =%d",a,b,kp);
}
