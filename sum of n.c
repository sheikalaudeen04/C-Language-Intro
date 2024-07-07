#include<stdio.h>
int main(){
	int n,i,sum=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i+=1){
		sum=sum+i;
	}
	printf("The sum is:%d",sum);
	/*while(i<=10){
		sum=sum+i;
		i+=1;
	}
	printf("The sum is:%d",sum);*/
	return 0;
}
