#include <stdio.h>    
int main()    
{
	int arr[] = {1, 2, 3, 4, 2, 7, 8, 8, 3};
	int length = sizeof(arr)/sizeof(arr[0]);
	int i=0;
	int j;
	printf("Duplicate elements in given array: \n");
    while(i<length)
    {
	    i++;
	  while(j<length)
	  {
		j=i+1;
		j++;
		if(arr[i]==arr[j])
			printf("%d\n",arr[j]);
	  }
    }
    return 0;
}
