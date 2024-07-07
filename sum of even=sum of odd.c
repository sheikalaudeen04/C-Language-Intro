#include<stdio.h>
int main(){
	int ar[100],i,n,so=0,se=0;
	printf("Enter no of elements: ");
	scanf("%d",&n);
	printf("Enter elements of array:\n");
	for(i=0;i<n;i+=1){
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i+=1){
		if(i%2==0)
			se+=ar[i];
		else
			so+=ar[i];
	}
	if(se==so){
		printf("Sum of even is equal to sum of odd");
	}
	else 
		printf("not equal");
}
