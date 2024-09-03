#include<stdio.h>
int main()
{
	int a=5,b=10;
	int *ptr;
	int *pq;
	ptr=&a;
	*ptr=a;
	*pq=b;
	printf("%d\n",a);
	printf("%p\n",&a);
	printf("%p\n",ptr);
	printf("%d\n",*ptr);
	printf("%d\n",*pq);
	return 0;
}
