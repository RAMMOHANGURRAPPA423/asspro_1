#include<stdio.h>
int main(){
	int a[]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	int i,l=0,s=0;
	for(i=0;i<n;i++){
		if(a[i]>l){
			s=l;
			l=a[i];
		}
		else if(a[i]>s){
			s=a[i];
		}
	}
	printf("the second largest number is %d\n",s);
}
