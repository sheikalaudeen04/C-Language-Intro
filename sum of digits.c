#include<stdio.h>
int main(){
	int n,t,d,s=0;
	printf("ENter num: ");
	scanf("%d",&n);
	t=n;
	while(t!=0){
		d=t%10;
		s+=d;
		t=t/10;
	}
	printf("Sum of digits is:%d",s);
	return 0;
}
