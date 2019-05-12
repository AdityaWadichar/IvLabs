#include<stdio.h>
int main()
{
	int m, i, j;
	float n, a, maxprice=0;
	printf ("Enter length of rod & size of price array\n");
	scanf ("%f %d", &n, &m);
	float A[m], swap, P[m], L[m];
	printf ("Enter length array\n");
	for (i=0; i<m; i++)
	{
		scanf ("%f", &L[i]);
	}
	printf ("Enter price array\n");
	for (i=0; i<m; i++)
	{
		scanf ("%f", &P[i]);
	}
	for (i=0; i<m; i++)
	{
		A[i]=P[i]/L[i]; /*price per unit length*/
	}
	/*sorting*/
	for (i=0; i<m-1; i++)
	{
		for (j=0; j<m-i-1; j++)
		{
			if (A[j]<A[j+1])
			{
				swap=A[j];
				A[j]=A[j+1];
				A[j+1]=swap;
				swap=L[j];
				L[j]=L[j+1];
				L[j+1]=swap;
				swap=P[j];
				P[j]=P[j+1];
				P[j+1]=swap;
			}
		}
	}
	a=n;
	i=0;
	while (i<m)
	{
		if (L[i]<=a)
		{
			maxprice=maxprice + P[i];
			a=a-L[i];
		}
		else
		{
			i++;
		}
	}
	printf ("maximum price is %f", maxprice);
}
