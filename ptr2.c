#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int *ptr;
	ptr=&a[0];
	printf("%p\n",ptr);
	return 0;
}
