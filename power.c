#include<stdio.h>
int main(){
	int i,n,p;
	float b,val=1;
	printf("Enter base value: ");
	scanf("%f",&b);
	printf("Enter power value: ");
	scanf("%d",&p);
	for(i=0;i<p;i++){
		val=val*b;
	}
	printf("The value is:%f",val);
}
