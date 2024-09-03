#include<stdio.h>


int main(int args[],char* argv[])
{

	int n1,n2;
	printf("enter the value for n1 n2:");
        scanf("%d %d",&n1,&n2);
	if(n1%2==0){
		while(n1<=n2){
			printf("n1:%d\n",n1);
			n1=n1+2;
		}
	}
	else{
		n1=n1+1;
		while(n1<=n2){
			printf("n1:%d\n",n1);
			n1=n1+2;
		}
	}
	return 0;
}
