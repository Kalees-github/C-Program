#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int i=0;
	while(i<10)
	{
		if(arr[i]%2==1)
			printf("even number: %d\n",arr[i]);
		else
			printf("odd number: %d\n",arr[i]);
		i++;
	}
	return 0;
}


