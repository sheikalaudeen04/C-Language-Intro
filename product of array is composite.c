#include<stdio.h>
int main(){
	int n,i,ar[50],p=1,f=0;
	printf("Enter no. of elements.\n");
	scanf("%d",&n);
	for(i=0;i<n;i+=1){
		printf("Enter the element: ");
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i+=1){
		p=p*ar[i];
	}
	for(i=2;i<p;i+=1){
		if(p%i==0){
			f=1;
			break;
		}
	}
	if(f==1){
		printf("The number is composite.");
	}
	else{
		printf("The number is not composite.");
	}
	return 0;
}
