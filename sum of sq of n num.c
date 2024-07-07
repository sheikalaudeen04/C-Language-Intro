#include<stdio.h>
int main(){
	int n,s=0,i,sq;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("The series is:\n");
	for(i=1;i<=n;i+=1){
		sq=i*i;
		s+=sq;
		printf("%d ",sq);
		
	}
	printf("\nThe sum of the square of n natural numbers is:%d",s);
	return 0;
}
