#include<stdio.h>
int main(){
	int n,d,t,s=0;
	printf("Enter a number:\n");
	scanf("%d",&n);
	t=n;
	while(t!=0){
		d=t%10;
		s=s*10+d;
		t=t/10;
	}
	if(s==n){
		printf("The number is palindrome.");
	}
	else{
		printf("The number is not palindrome.");
	}
	return 0;
}
