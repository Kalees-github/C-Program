#include<stdio.h>
int main()
{
	int f,l,temp,size;
	int arr[]={5,15,20,25,30};
	size = sizeof(arr)/sizeof(arr[0]);
	f = 0;
	l = size -1;
	while(f<l)
	{
		temp = arr[f];
		arr[f] = arr[l];
		arr[l] = temp;
		f++;
		l--;
	}
	printf("reverse array\n");
	for(f=0;f<size;f++)
	{
		printf("%d\n",arr[f]);
	}
/*	while(f<size)
	{
		printf("%d\n",arr[f]);
		f++;
	}*/
	return 0;
}

  
