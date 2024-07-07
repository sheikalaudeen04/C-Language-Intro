#include<stdio.h>
int main(){
	int n,i,flag=0;
	printf("ENter your number: ");
	scanf("%d",&n);
	for(i=2;i<n;i+=1){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("It is prime");
	}
	else
		printf("IT is composite");
		return 0;
}
