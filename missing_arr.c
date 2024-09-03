#include<stdio.h>
int main()
{
	int a[5] = {1,2,4,5,6};
	int n=6;
	int sum = 0;
	int i;
	int m;
	n=n*(n+1)/2;
	i=0;
	while(i<=4)
	{
		sum = sum+a[i];
		i++;
	}
	m= n-sum;
	printf("%d\n",m);

	return 0;
}
		
