#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int i=0,j=5,temp;
	while(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		printf("%d\n",a[i]);
		j++;
	}
	while(i<=5)
	{
		i--;
	}
	return 0;
}


