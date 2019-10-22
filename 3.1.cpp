#include <stdio.h>
int kt_so_hoan_hao (int n)
{
	int tong =0;
	for (int i=1 ; i< n ;i++)
	if (n%i==0) 
	 tong +=i;
	 
	 if (tong ==n)
	  return 1;
	 else 
	  return 0 ;
}	 
int main ()
{
	int n ;
	printf (" nhap n : ");
	scanf ("%d",&n);
	
	int kt =kt_so_hoan_hao ( n);
		if (kt==1)
			printf ("%d la so hoan hao ",n);
		else 
			printf ("%d khong la so hoan hao ",n);	
}
