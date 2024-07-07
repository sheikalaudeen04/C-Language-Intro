#include<stdio.h>
int main(){
	int ar[100],n,i;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i+=1){
		printf("Enter the element: ");
		scanf("%d",&ar[i]);
	}
	printf("The reversed array is:\n");
	for(i=n-1;i>=0;i-=1){
		printf("%d ",ar[i]);
	}
	return 0;
}
