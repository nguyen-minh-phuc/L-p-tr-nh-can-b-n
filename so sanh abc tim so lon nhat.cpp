#include <stdio.h>
 int main ()
 {
 	int a , b ,c ;
 	 printf("nhap a: ");
 	scanf ("%d",&a);
 	 printf("nhap b: ");
 	scanf ("%d",&b);
 	 printf("nhap c : ");
 	scanf ("%d",&c);
 	if (a>b&&a>c)
 	 printf ("%d la so lon nhat",a);
 	else 
 	{
 		if (b>a&&b>c)
 		 printf ("%d la so lon nhat",b);
 		else
 		 printf ("%d la so lon nhat",c);
 		
	 }
 	
 	return 0;
 }
