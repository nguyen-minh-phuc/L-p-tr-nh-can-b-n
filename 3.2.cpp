#include <stdio.h>
#include<conio.h>
#include<math.h>
int TinhTohop (int n,int k);

int TinhTohop (int n, int k)
{
	int tongth=0,a=1, b=1,i,q,c=1;
	q=n-k;
	{
	
	for ( i=1 ; i<=n; i++)
	 a=a*i; 
	 
	 for ( i=1 ; i<=k; i++)
	 b=b*i;
	 
	  for ( i=1 ; i<=q; i++)
	  c=c*i;
	}
	  if (0<=k|| n>=k)
	  {
	  	tongth = a/(b*c);
	  }
	  
	  	 		     
	return	tongth ;
}
 int main ()
{
	int n,k,  tongbp ;
	printf ("nhap so nuyen duong n :");
	scanf ("%d",&n);
	printf ("nhap so nuyen duong k :");
	scanf ("%d",&k);
	
	int tongth = TinhTohop ( n,k);
	printf (" TinhTohop %d!/%d!(%d-%d)!=%d :",n,k,n,k,tongth );
	
}
