#include<stdio.h>
int main()
{
        int a[5] = {1,2,4,5,6};
        int n=6;
        int sum = 0;
        int *ptr = NULL;
        int m;
	ptr=a;
        n=n*(n+1)/2;
        while(*ptr<=4)
        {
                sum = sum+ *ptr;
                ptr++;
        }
        m= n-sum;
        printf("%d\n",m);

        return 0;
}
