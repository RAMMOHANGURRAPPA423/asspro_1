#include<stdio.h>
int maximum(int arr[], int n, int max)
{
	if(n>0)
	{
		if(arr[n]>max)
		{
			max = arr[n];
		}
		return (maximum(arr,n-1,max));
	}
	else
	{
		return max;
	}
}
int main()
{
	int arr[]={10,20,30,40,50};
	int n=sizeof(arr)/sizeof(arr[0]);
	int max,min;
	max=arr[0];
    int largest=maximum(arr,n,max);
    printf("the max element is %d",largest);
  
    return 0;
}
