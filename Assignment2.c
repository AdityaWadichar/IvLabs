#include<stdio.h>
int jumps(int n, int A[])
{
	int i, B[n], flag, count=0, max, x;
	for (i=0; i<n; i++)
	{
		B[i]=A[i]+i;
	}
	flag=0;
	while (flag<n)
	{
		max=0;
		for (i=flag+1; i<=flag+A[flag]; i++)
		{
			if (B[i]>max)
			{
				max=B[i];
				x=i;
			}
		}
		flag=x;
		count++;
		if (flag+A[flag]==n-1)
		{
			count++;
			break;
		}
	}
	return count;
}


int main()
{
	int m, j, steps;
	printf("Enter total numbers in array\n");
	scanf("%d", &m);
	int arr[m];
	printf ("Enter numbers in array\n");
	for (j=0; j<m; j++)
	{
		scanf("%d", &arr[j]);
	}
	if (arr[0]==0)
	{
		printf("Not possible");
	}
	else
	{
		steps=jumps(m, arr);
		printf("Minimum jumps are %d", steps);
	}
}
