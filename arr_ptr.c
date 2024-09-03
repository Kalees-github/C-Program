#include<stdio.h>
int main(int argc,char*argv[])
{
	int a[5]={1,2,3,4,5};
	int *ptr=NULL;
	ptr=a;
	while(ptr<=&a[4])
	{
		printf("%d\n",*ptr);
		ptr++;
	}
	return 0;
}
