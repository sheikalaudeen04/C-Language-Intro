#include<stdio.h>
int main(){
	int ar[100],i,avg,n;
	int sum=0;
	printf("Enter no. of elements.\n");
	scanf("%d",&n);
	for(i=0;i<n;i+=1){
		printf("Enter the element: ");
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i+=1){
		sum=sum+ar[i];
	}
	avg=sum/n;
	printf("%d\n",sum);
	printf("%d\n",avg);
	return 0;
}
