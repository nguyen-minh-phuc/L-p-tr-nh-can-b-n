#include <stdio.h>

int TimUocChung(int a, int b)
{
    if (a == 0 || b == 0)
	{
        return a + b;
    }
    while (a != b){
        if (a > b)
		{
            a -= b;
             return a;
        }
		else
		{
            b -= a;
        	return b ;
		}	
    }
}
 int main ()
{
	int a,b ;
	printf ("nhap so nuyen duong a :");
	scanf ("%d",&a);
	printf ("nhap so nuyen duong b :");
	scanf ("%d",&b);
	
	int kp = TimUocChung ( a,b);
	printf ("uoc chung lon nhat cua %d va %d la =%d",a,b,kp);
}
